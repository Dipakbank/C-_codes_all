// Ambiguity Resolution in Inheritance

#include <iostream>
using namespace std;

class base1
{
public:
    void greating()
    {
        cout << "Good morning " << endl;
    }
};
class base2
{
public:
    void greating()
    {
        cout << "Kaise ho  " << endl;
    }
};

class great : public base1,public base2
{
public:
    void greating()
    {
        base1 ::greating();
    };
};

class B
{
public:
    void hello()
    {
        cout << "hi" << endl;
    }
};
class D :public B
{
public:
    void hello()
    {
        cout << "hi dips" << endl;
    }
};
int main()
{
    // great me;            // ambiguity no 1  .
    // me.greating();       // ambiguity no 1  .
    D sum;                                  //ambiguity no 2    
    sum.hello();                            //ambiguity no 2

    return 0;
}