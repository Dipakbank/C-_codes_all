// Array of objects using pointer in C++

#include <iostream>
using namespace std;
class shop
{

    int id;
    float price;

public:
    void setdata(int a, int b)
    {
        id = a;
        price = b;
    }
    int getdata()
    {
        cout << "id is  " << id << endl;
        cout << "price  is  " << price << endl;
    }
};

int main()
{ 
    shop *ptr = new shop[3];
    shop *tempptr = ptr;
    int i ,j, p;
    float q;

    for (j = 0; j < 3; j++)    // Can use only one variable   
    {
        cout << " Enter the id and price of  " << 1 + j << endl;
        cin >> p >> q;
        ptr->setdata(p, q);
        ptr++;
    }
    for (i = 0; i < 3; i++)   // Can use only one variable 
    {                                                     
        /* code */
        tempptr->getdata();
        tempptr++;
    }

    return 0;
}