// Constroctor overloading .
#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex()
    {
        // Constructor defination

        // int x,y;
        cout << "hi" << endl;
        a = 0;
        b = 0;
    }
    Complex(int x, int y)
    {
        // Constructor defination

        // int x,y;
        cout << "hi" << endl;
        a = x;
        b = y;
    }
    Complex(int x)
    {
        // Constructor defination

        // int x,y;
        cout << "hi" << endl;
        a = x;
        b = 5;
    }

    void printnum()
    {
        cout << "Your name is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    Complex d;
    d.printnum();
                                //implicite call
    Complex t(4, 7);
    t.printnum();
    Complex p(4);
    p.printnum();

    return 0;
}