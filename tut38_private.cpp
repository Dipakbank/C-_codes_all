// Single inheritance deep dive
#include <iostream>
using namespace std;

class Base
{
    int Data1;

public:
    int Data2;
    void setData();
    int getData1();
    int getData2();
};
void Base ::setData()
{
    Data1 = 10;
    Data2 = 20;
}
int Base ::getData1()
{
    return Data1;
}
int Base ::getData2()
{
    return Data2;
}
class Derived : private Base
{
    int Data3;

public:
    void process()
    {
        setData(); // function called in a function
        Data3 = Data2 * getData1();
    }
    int print()
    {
        cout << getData1() << endl;
        cout << Data2 << endl;
        cout << Data3 << endl;
    }
};

int main()
{
    Derived der;
    // der.setData();
    // der.getData1();
    der.process();
    der.print();
    return 0;
}