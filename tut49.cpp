// Initialization List in Constructor

/*
constructor (arg - list) : initialization - section 

*/

#include<iostream>
using namespace std;

class dipak
{
    int a ;
    int b ;
    public:
    // Constructor 
    // dipak(int l ,int  m) :  a(l),b(m)
    // dipak(int l ,int  m) :  b(m),a(l)
    // dipak(int l ,int  m) :  a(l),b(l +m)
    // dipak(int l ,int  m) :  b(l), a(m)
    // dipak(int l ,int  m) :  a(l +m),b(m)
    // dipak(int l ,int  m) :  a(l +b),b(m)    **a will get garbage value**
    
    dipak(int l ,int  m) :  a(l),b(a +m)
    {
         cout<<"Initiolization list "<<a<<endl;
         cout<<"Initiolization list "<<b<<endl;
         
    }
};

int main(){
    dipak(5, 78);

    
    return 0;
}