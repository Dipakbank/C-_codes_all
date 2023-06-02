
#include <iostream>
#include <math.h>
using namespace std;

class Complex
{
    int friend squarer(void);
    int a, b;

public:
    Complex(int, int); // Constructor declaration

    void printnum()
    {
        cout << "Your name is " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(int x, int y)
{ // Constructor defination

    // int x,y;
    cout << "hi" << endl;
    a = x;
    b = y;
}

int squarer(void)
{
    int a = 3, b = 4;
    double p = sqrt((a) ^ 2 + (b) ^ 2);
    cout << p;
}

int main()
{
    // implisit call
    Complex t(3, 4);
    t.printnum();

    // explicit  call
    //  Complex  b = Complex(6,8);
    //  b.printnum();
    squarer();

    return 0;
}
