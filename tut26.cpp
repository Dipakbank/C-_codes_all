#include<iostream>
using namespace std;
class Complex 
{

    int a , b;
    friend Complex sumcomplex(Complex o1 , Complex o2);
    public :
    void setnum(int n1 , int n2)
    {
        a = n1 ;
        b = n2;
    }
    void printnum(){
        cout<<"Your name is "<<a<<" + "<<b<<"i"<<endl;
    }
};

Complex sumcomplex(Complex o1 , Complex o2)
{
    Complex o3;
    o3.setnum((o1.a +o2.a) ,(o1.b + o2.b));
    return o3;
}

int main(){
    Complex c1 ,c2 , sum;
    c1.setnum(1,4);
    c2.setnum(4,6);
    c1.printnum();
    c2.printnum();
    sum = sumcomplex (c1 , c2);
    sum.printnum();
    return 0;
}

