//multiple inheritance deep dive 

#include <iostream>
using namespace std;

class base1
{
protected:
    int num1;

public:
    void setnum1(int a)
    {
        num1 = a;
    }
    void getnum1()
    {
        cout << "num1 is " << num1 << endl;
    }
};

class base2
{
protected:
    int num2;

public:
    void setnum2(int a)
    {
        num2 = a;
    }
    int getnum2()
    {
        cout << "num2 is " << num2 << endl;
    }
};

class derived : public base1 ,public base2
{
    protected:
    int num3;
    public:
    void show()
    {
        cout<<"the sum of 2 is : "<<num1+ num2<<endl;
    }

};

int main()
{
    derived der;
    der.setnum1(23);
    der.getnum1();
    der.setnum2(44);
    der.show();

    return 0;
}
