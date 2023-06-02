// Construcctor in derived class 

#include<iostream>
using namespace std;

class Base1{
    protected:
    int a;
    public:
    Base1(int i){
        a = i;
        cout<<"Base1 is called and  "<<a<<endl;
    }

    void print1(){

        cout<<"The a is :"<<a<<endl;
    }
};

class Base2{
    protected:
    int b;
    public:
    Base2(int i){
        b = i;
        cout<<"Base2 is called and  "<<b<<endl;
    }

    void print2(){

        cout<<"The b is :"<<b<<endl;
    }
};

class derived :public Base1 , public Base2
{
    int c,d;
    public:
    derived(int x, int y, int z ,int p ) : Base1(x),Base2(y)
    {
        c = z;
        d = p;
        cout<<"derived class constuctor is called "
        <<"c is "<<c<<"and d is "<<d<<endl;
        
    }
};

int main(){

    derived k(2,3,4,5);
    //OR
    derived (2,3,4,5);
    return 0;
}