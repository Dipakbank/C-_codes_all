#include <iostream>
using namespace std;

class base
{
public:
    int a =0;

protected:
    int b;
};
class derived : protected base
{
public:
    int c = 121;
};
int main()
{
    derived der;
    cout<<der.c;    //It will work since data members are protected in both as well as in derived class .     
    // cout<<der.a;    //will not work since data members are protected in both as well as in derived class .
    // cout<<der.b;    //will not work since data members are protected in both as well as in derived class .


}
