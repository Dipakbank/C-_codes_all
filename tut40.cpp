// protected variables are inherited till last class 
// so that they appears as the protected variables of last class 

#include <iostream>

using namespace std;

class student
{
protected:
    int rollno;

public:
    void setrollno(int);
    int getrollno();
};
void student ::setrollno(int roll)
{
    rollno = roll;
}

int student ::getrollno()
{
    cout << "Roll no is : " << rollno << endl;
}

class exam : public student
{
protected:
    float math, physics;

public:
    void setmarks(float, float);
    float getmarks();
};

void exam ::setmarks(float m, float p)
{
    math = m;
    physics = p;
}
float exam ::getmarks()
{
    cout << "Math marks are : " << math << endl;
    cout << "Physics marks are : " << physics << endl;
}

class result : public exam
{
public:
    int display()
    {
        cout << "total % are :" << (math + physics) / 2 << endl;
    };
};

int main()
{

    result r;
    r.setrollno(45);
    r.getrollno();
    r.setmarks(99, 90);
    r.getmarks();
    r.display();

    return 0;
}