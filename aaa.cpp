#include <iostream>
#include <cstring>
#include <string>
#include <openssl/aes.h>
#include <openssl/rand.h>
#include <openssl/evp.h>
#include <openssl/err.h>
#include <openssl/sha.h>
#include <openssl/hmac.h>

std::string aes_encrypt(const std::string& input, const std::string& key) {
    AES_KEY aes_key;
    if (AES_set_encrypt_key(reinterpret_cast<const unsigned char*>(key.c_str()), key.size()*8, &aes_key) < 0) {
        throw std::runtime_error("AES_set_encrypt_key failed");
    }

    size_t output_length = input.size() + AES_BLOCK_SIZE - 1;
    output_length -= output_length % AES_BLOCK_SIZE;
    std::string output;
    output.resize(output_length);

    unsigned char iv[AES_BLOCK_SIZE];
    if (RAND_bytes(iv, AES_BLOCK_SIZE) < 0) {
        throw std::runtime_error("RAND_bytes failed");
    }

    AES_cbc_encrypt(reinterpret_cast<const unsigned char*>(input.c_str()), reinterpret_cast<unsigned char*>(output.data()),
        input.size(), &aes_key, iv, AES_ENCRYPT);

    output = std::string(reinterpret_cast<char*>(iv), AES_BLOCK_SIZE) + output;
    return output;
}

std::string aes_decrypt(const std::string& input, const std::string& key) {
    AES_KEY aes_key;
    if (AES_set_decrypt_key(reinterpret_cast<const unsigned char*>(key.c_str()), key.size()*8, &aes_key) < 0) {
        throw std::runtime_error("AES_set_decrypt_key failed");
    }

    if (input.size() < AES_BLOCK_SIZE) {
        throw std::runtime_error("Invalid input size");
    }

    unsigned char
