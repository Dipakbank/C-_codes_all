#include <iostream>
using namespace std;
class bankar
{
    string names[100];
    int age[100];
    int c;

public:
    void itc()
    {
        c = 0;
    }
    void getnames();
    void names_with_age();
};

void bankar ::getnames(void)
{
    cout << "name no :" << c + 1 << endl;
    cin >> names[c];
    cout << "age :" << endl;
    cin >> age[c];
    c++;
}

void bankar ::names_with_age()
{
    for (int i = 0; i < c; i++)

    {
        cout << names[i] << " is of age " << age[i] << endl;
    }
}

// void bankar :: c
// {

// }

int main()
{
    bankar family;
    family.itc();
    family.getnames();
    family.getnames();
    // family.getnames();
    // family.getnames();
    family.names_with_age();
    return 0;
}