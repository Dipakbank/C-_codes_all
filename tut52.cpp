// Array of objects using  pointers  in c++


#include <iostream>
using namespace std;

class shop
{
    int id;
    int price;

public:
    void setdata(int a, int b)
    {
        id = a;
        price = b;
    }
    int getdata()
    {
        cout << "The id is :" << id << endl;
        cout << "The price is :" << price << endl;
    }
};
int main()
{
            //  1          2          3
            //  ^          ^          ^
            //  |          |          |
            //  |          |          |
            //            ptr
            // tempptr 
            // *tempptr = ptr

    // shop *ptr;      //wrong

    shop *ptr = new shop[2];  // We have created the object of type shop(the class)
                              //and used the ptr (pointer ) for traversal    

    // shop * ptr = new shop[3];        //for practice
    // shop  * ptr = new shop[5];       //for practice
    // shop * ptr = new shop [7];       //for practice
    shop *tempptr = ptr; 
    // same as
    // int  *ptr = new int [];
    int p, q ,i;

    for ( i = 0; i < 2; i++)
    {
        /* code */
        cout << " Enter the id and price of no : " << (1 + i) << endl;
        cin >> p >> q;
        ptr->setdata(p, q);
        ptr++;
    }

    for ( i = 0; i < 2; i++)
    {

        tempptr->getdata();
        tempptr++;
    }

    return 0;
}