// Nesting of member function

#include <iostream>
#include <string>
using namespace std;
class binary
{
private:
    string s;
    void chk_bin(void);      //we can public it .

public:
    void read(void);
    void ones(void);
    void display(void);
} harry;

void binary ::read(void)
{
    cout << "Enter a binary number :" << endl;
    cin >> s;
    cout << endl;
}
void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << " Incorrect binary formate " << endl;
            exit(0);
        }
    }
}

void binary ::ones(void)
{   
    chk_bin();                      //NESTING OF FUNCTION
                                    //chk_bin() IS NESTED IN ones()
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void binary ::display()
{
    cout << "Displaying your binary no :" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
    cout << endl;
}

int main()
{
    binary harry;
    harry.read();
    // harry.chk_bin();             // private function , so not accessible
    // harry.display();
    harry.ones();
    harry.display();

    return 0;
}

/*
Enter a binary number :
10101001010101001111

Displaying your binary no :      
01010110101010110000
*/


// Object of class can only access public members of class