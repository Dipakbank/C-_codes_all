// Pointer to objects and
// arrow operator in cpp
#include <iostream>
using namespace std;
class complax
{
    int real, imaginary;

public:
    void setdata(int a, int b)
    {
         real = a;
         imaginary = b;
    }
    void getdata()
    {
        cout << "The real part is : " << real << endl;
        cout << "The imaginary part is : " << imaginary << endl;
    }
};

int main()
{
    complax c;
    // int* ptr = &c;       //wrong
    // complax* ptr = &c;
    // (*ptr).setdata(34,56);
    // (*ptr).getdata();

    // complax* ptr = new complax;    // using new key-word 
    // (*ptr).setdata(34,56);
    // (*ptr).getdata();

    // complax* ptr = new complax;    // using -> 
    // // *ptr-->setdata(34,56);          // wrong
    // ptr->setdata(34,56);
    // (*ptr).getdata();

    // complax (*ptr);
    // *complax = new complax;  
    

    // arrey of objects
    complax* ptr = new complax[4];

    ptr->setdata(6,7);
    ptr->getdata();
    

    (*ptr).setdata(34,56);
    (*ptr).getdata();

    return 0;
}
