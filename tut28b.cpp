//Friend Function 

#include <iostream>
using namespace std;
class c2;
class c1
{   
    

    int val1;
    friend void swap(c1 &x, c2 &y);

public:
    void indata(int a)
    {
        val1 = a;
    }
    int display()
    {
        cout << val1 << endl;
    }   
};

class c2
{   
    

    int val2;
    friend void swap(c1 &, c2 &);

public:
    void indata(int a)
    {
        val2 = a;
    }
    int display()
    {
        cout << val2 << endl;
    }   
};

void swap( c1 &x, c2 &y){          //swaping & Call by reference( & ).
    int temp= x.val1;
    x.val1 = y.val2;
    y.val2 = temp;

}    
    

        
    int main()
    {
        c1 o1;
        o1.indata(45);
        o1.display();
        c2 o2;
        o2.indata(33);
        o2.display();
        swap(o1, o2);
        // cout << "now" << o1.display() << "&" << o2.display() << endl;
        o1.display();
        o2.display();
        return 0;
    }