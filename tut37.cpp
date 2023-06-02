// Inheritance syntax and visibility mode

#include <iostream>
using namespace std;
// Base Class 
class Employee
{
    public:
    int id;
    float salary;
    Employee(int inpid)
    {
        id = inpid;
        salary = 34;

    }
    Employee(){}
};

// Derived Class 
// class {{Derived-class-name}} : {{visibility mode}} {{base-class-name }}
// {

// };
//Creating a programing class from the Employee class
//private members of base class are never  inherit
class Programmer :public Employee
{
    public:
    Programmer (int inpId){
        id = inpId;
    }
    int languagecode = 9;
    void getdata(){
    cout<<id<<endl;

    }

};

int main()
{   Employee harry(1) , dipak(2);
    cout<<harry.salary<<endl;
    cout<<dipak.salary<<endl;

    Programmer skillF(10);
    cout<<skillF.languagecode<<endl;
    cout<<skillF.id<<endl;
    skillF.getdata();


    return 0;
}