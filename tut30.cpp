
#include<iostream>
using namespace std;

class  Complex
{
    int a , b ;
    public:
    Complex(int,int) ;             //Constructor declaration

    void printnum()
    {
        cout << "Your name is " << a << " + " << b<< "i" << endl;
    }
};

Complex :: Complex (int x, int y){       //Constructor defination 
    
    // int x,y;
    cout<<"hi"<<endl    ;
    a = x;
    b = y;
}
 
int main(){
    // implisit call
    Complex a(3,6);
    a.printnum();
    
    //explicit  call
    Complex  b = Complex(3,3);
    b.printnum();
    
    return 0;
}
