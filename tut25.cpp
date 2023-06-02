//arrey of objects .
#include <iostream>
using namespace std;
class Employee
{
    int id;
    int salary;

public:
    void setdata()
    {
        salary = 432;
        cout << "Enter the id " << endl;
        cin >> id;
    }
    void getdata(){
        cout<<"id is "<<id<<endl;
    }
};

int main()
{
    // Employee h ,l ,s ,r;
    Employee fb[4];          //arrey of objects .
    for(int i=0; i < 4; i++ )
    {
        fb[i].setdata();
        fb[i].getdata();
    }
    
    return 0;
}