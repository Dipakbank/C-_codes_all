#include <iostream>
using namespace std;

// virtual Base class
/*
           student  
        /           \
       *              *
    test               sport
        \           /
         *         *
           result

*/

class student
{
protected:
    int roll_no;

public:
    void set_rollno(int roll)
    {
        roll_no = roll;
    }
    void get_roll()
    {
        cout << "roll no is : " << roll_no << endl;
    }
};

class test : public virtual student
{
protected:
    float physics, math;

public:
    void set_marks(int m1, int m2)
    {
        physics = m1;
        math = m2;
    }
    int get_marks(void)
    {
        cout << "physics marks are : " << physics << endl
             << "math marks are : " << math << endl;
        // "Total marks are : "<<Total<<endl;
    }
};

class sport :  public virtual student
{
protected:
    float score;

 
public: 
    void set_score(float s)
    {
        score = s ;
    }
    int get_score()
    {
        cout << "score is :" << score << endl;
    }
};

class result : public test,public sport            // public for both   
{
    float total;

public:
    
    void print_marks(){
    total= math  + score + physics ;
    cout<< " roll no is "<<roll_no<<endl;
    cout<< " marks are  "<<math + physics<<endl;
    cout<< " score  is  "<<score<<endl;
    cout<< " total is  "<<total<<endl;
        
    }
};
int main()
{
    result dipak;
    dipak.set_rollno(34);
    dipak.set_marks(99, 100);
    dipak.set_score(9);
    dipak.print_marks();

    // sport m;
    // m.set_score(9);
    return 0;
}