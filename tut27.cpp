#include <iostream>
using namespace std;

class Complex;    //Forward declaration

class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumrealcomplex(Complex, Complex);
    int sumcompcomplex(Complex, Complex);
};
class Complex
{
    friend int calculator ::sumrealcomplex(Complex o1, Complex o2);     //imp
    friend int calculator ::sumcompcomplex(Complex o1, Complex o2);   //imp
    friend class calculator;  //make friend class 
    int a, b;

public:
    void setnum(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printnum()
    {
        cout << "Your name is " << a << " + " << b << "i" << endl;
    }
};

int calculator ::sumrealcomplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}
int calculator ::sumcompcomplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}
int main()
{
    Complex o1, o2;
    o1.setnum(3, 4);
    o2.setnum(23, 34);
    calculator calc;
    int r = calc.sumrealcomplex(o1, o2);
    int c = calc.sumcompcomplex(o1, o2);
    cout << "sum of real " << r<<endl;
    cout << "sum of complex parts is " << c;
    return 0;
}