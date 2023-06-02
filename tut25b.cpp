// Passing object as function argument 
#include<iostream>
using namespace std;

class complex 
{
    int a;
    int b;
    public:
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void setdatabysum(complex o1, complex o2)  // o1 not 01 .
    {
        a = o1.a + o2.a ;
        b = o1.b + o2.b ;
    }
    void print(){
        cout<<"complex no is "<<a<<"+"<<b<<"i"<<endl;

    }

};

int main(){
    complex c1,c2,c3 ;
    c1.setdata(3,5);
    c1.print();
   

    c2.setdata(6,9);
    c2.print();

    c3.setdatabysum(c1,c2);
    c3.print();

    
    return 0;
}