//c++ Objects Memory allocation & using array in class

#include <iostream>
using namespace std;



class shop
{
    int itemId[100];
    int itemprice[100];  
    int counter ;
    public :
     void initCounter()
     {
        counter =0;
     } 
    void setprice();
    void displayprice();
};
void shop :: setprice()
{
    cout<<"Enter Id of your item no "<<counter +1<< endl;
    cin>>itemId[counter];
    cout<<"Enter price of your item"<< endl;
    cin>>itemprice[counter];
    cout<<endl;
    counter ++ ;
}

void shop :: displayprice()
{
    for (int i = 0 ; i < counter ; i++ )  // why we take  i  here,
                                          // why not keep  c  .  
                                          //It also runs  
    {
        cout<<"Price of an item of Id "<<itemId[i]<<" is "<<itemprice[i]<<endl;    //i or c ,It doesn't matter ;
                                                                                   //imp is itemId[0],itemId[1], ...arrey element
    }
}
// void shop :: displayprice()
// {
//     for (int c = 0 ; c < counter ; c++ )  // why we take  i  here,
//                                           // why not keep  c  .
//     {
//         cout<<"Price of an item of Id "<<itemId[c]<<" is "<<itemprice[c]<<endl;
//     }
// }

int main()
{   
    shop dukan ;          // Now memory get allocated , after creation of object dukan
    dukan.initCounter();
    dukan.setprice();
    dukan.setprice();
    dukan.setprice();
    dukan.displayprice();
    return 0;
}
/*
Enter Id of your item no 1
344334
Enter price of your item
3

Enter Id of your item no 2
343
Enter price of your item
3

Enter Id of your item no 3
44
Enter price of your item
3

Price of an item of Id 344334 is 3
Price of an item of Id 343 is 3   
Price of an item of Id 44 is 3
*/