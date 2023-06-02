// Static data members & methods in oop c++
#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count ;

    // int count ;                    // But int count is the property of an object
public:
    void setData(void)
    {
        cout << "Enter employee id :" << endl;
        cin >> id;
        count++;
    }                   


    void getData(void)
        
    {   

        cout << "id of the employee is : " ;
        cout << id<< endl;
        cout << "this is employee no " << count << endl;
    }
    static void getcount(void)              // in static fn only static data type
    {   
        // cout<<id;                        // in static fn only static data type
        cout << "count is :" << count << endl<<endl;
    }
};
int Employee::count;
// default value is 0
// static count is the property of class

int main()
{
    Employee harry, rohan, lovish;
    harry.setData();
    harry.getData();
    Employee ::getcount();       // property of class, hence no object.   ?//       

    rohan.setData();
    rohan.getData();
    Employee ::getcount();       // property of class, hence no object.   ?// 

    lovish.setData();
    lovish.getData();
    Employee ::getcount();       // property of class, hence no object.   ?// 

    return 0;
}


/*
Enter employee id :
645
id of the employee is : 645
this is employee no 1      
count is :1

Enter employee id :        
4
id of the employee is : 4
this is employee no 2    
count is :2

Enter employee id :      
576
id of the employee is : 576
this is employee no 3      
count is :3
*/
