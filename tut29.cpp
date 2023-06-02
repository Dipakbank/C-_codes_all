//Constructor  

#include<iostream>
using namespace std;

class  Complex
{
    int a , b ;
    public:
    Complex(void) ;             //Constructor declaration

    void printnum()
    {
        cout << "Your name is " << a << " + " << b << "i" << endl;
    }
};

Complex :: Complex (void){       //Constructor defination 
    cout<<"hi"<<endl    ;
    a =10;                          //default constructor (no parameter)
    b = 44;
}
 
int main(){
    Complex c1 , c2 , c3;
    // c1.Complex();     NO NEED TO CALL IN THIS WAY
                     // COMPLEX AUTO MATICALLY GET CALLED .
    c1.printnum();
    c2.printnum();
    c3.printnum();
    
    return 0;
}
// Creating a Constructor
    // Constructor is a special member function with the same name as of the class.
    //It is used to initialize the objects of its class
    //It is automatically invoked whenever an object is created
