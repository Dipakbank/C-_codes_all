// Constroctor with Default argument

#include <iostream>
using namespace std;

class Simple
{
    int data1;
    int data2;
    int data3;

public:
    
    Simple(int a, int b = 88, int c = 44) // Constroctor with Default argument

    {
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void printfun();
};
void Simple ::printfun()
{
    cout << "Value of a ,b and c are :" << data1 << "," << data2 << "," << data3 << endl;
}
int main()
{
    Simple a(2);
    a.printfun();

    Simple t(5,6);
    t.printfun();

    Simple y(2, 8, 90);
    y.printfun();

    return 0;
}