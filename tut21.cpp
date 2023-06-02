// Class, PUBLIC & private modifier 


#include<iostream>
using namespace std;

class Employee
{
    private:                        //modifiers
    int a,b,c;
    public:                         //modifiers
    int d,e;
    void setData(int a1,int b1,int c1);
    void getData()
    {
        cout<<"The value of a is :"<<a<<endl;
        cout<<"The value of b is :"<<b<<endl;
        cout<<"The value of c is :"<<c<<endl;
        cout<<"The value of d is :"<<d<<endl;
        cout<<"The value of e is :"<<e<<endl;
    }
};
void Employee :: setData(int a1, int b1 ,int c1)
{
     a=a1;
     b=b1;
     c=c1;
}

int main()
{
    Employee harry ;
    harry.setData(1,2,4);
    harry.e=89;
    harry.d=34;
    // harry.a= 11;            // We can't do this 
    harry.getData();
    
    return 0;
}
//output**********************************************
// The value of a is :1
// The value of b is :2
// The value of c is :4
// The value of d is :34
// The value of e is :89


//Object of the class can access only public variables/modifiers of the class.
//Object of the class can't access private variables/modifiers of the class.
//Private modifiers access by function of the class only.