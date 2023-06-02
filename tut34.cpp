// Copy Constructor .

#include<iostream>
using namespace std;

class Number{
    int a ;
    public:
    Number(){
        a = 0;
    }
    Number (int num){
        a = num;
    }
     // When no copy Constructor is found ; 
     // compiler supplies it's own copy constructor .
    // Number (Number & obj ){                            //
    //     cout<< "Copy constructor called "<<endl;       //
    //     a = obj.a;                                     //
    // }
    
    void display(){
        cout <<"the num is "<<a<<endl;
    }
};



int main(){
    Number x , y,z(45)  , z2 ;
    x.display();
    y.display();
    z.display();

    Number z1(x); // copy constructor invoked .
    z1.display();

    z2 = z;    // copy constructor  not called 
    z2.display();

    Number z3 = z;   // copy constructor invoked .
    z3.display();

    return 0;
}