// Solution to Exercise on Cpp Inheritance _ C++ Tutorials for Beginners #47



#include <iostream>
#include <cmath>
using namespace std;

class calculator
{
protected:
    int a, b;

public:
    void getdata()
    {
        cout << "Enter first num : " << endl;
        cin >> a;
        cout << "Enter secound num : " << endl;
        cin >> b;
    }

    float opearation()
    {
        cout << "sum is " << a + b << endl;
        cout << "sub is " << a - b << endl;
        cout << "multiplicatin is " << a * b << endl;
        cout << "div is " << float(float(a) / float(b)) << endl;
        // cout << "div is " << a / b << endl;
    }
};
class scientificcalculator
{
protected:
    int a, b;

public:
    void scoperation()
    {
        cout << "sin of num is " << sin(a) << endl;
        cout << "cos of num is " << cos(a) << endl;
        cout << "tan of num is " << tan(a) << endl;
        // cout << "cot of num is " << sec(a) << endl;
    }
};

class hybride : public calculator, public scientificcalculator
{

};

int main()
{
    hybride c;
    c.getdata();
    c.opearation();
    c.scoperation();
    // c.Take_input();

    return 0;
}
