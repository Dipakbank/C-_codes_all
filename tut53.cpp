// this pointer in c++
// "this" pointer in c++

#include <iostream>
using namespace std;
class A
{
    int a, b;

public: 
    void setdata (int a){     // will give garbage value    
        a =a ;               // will give garbage value                
    }                        // will give garbage value

    // void setdata (int a){     //the a parameter is local variable
    //     this->a=a;             //Now local variables value is get 
    //                            //assigned to class variable a.
    //                            //this->a ===== class variable a.
    // }


    int getdata()
    {
        cout << "the value of a is " << a << endl;
    }
};

int main()
{
    A d;
    d.setdata(2);
    d.getdata();
    return 0;
}