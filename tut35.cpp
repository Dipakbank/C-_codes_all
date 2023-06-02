// Destructor

#include <iostream>
using namespace std;
int count = 0;

//  Never take any argument
class num
{
public:
    num()
    {
        count++;
        cout << "constructor is called for object no : " << count << endl;
    }
    ~num(){
        cout << "destructor is called for object no : " << count << endl;
        count--;
    }
};

int main()
{   
    cout<<"In main function ."<<endl;
   cout<<"1st object  ."<<endl;

   num n1;
    {
    cout << "Entering this block ."  << endl;
    cout<<"Creating two more object ."<<endl;
    num n2 , n3;
    cout << "Exiting this block ."  << endl;
    }
    cout << "back to main  ."  << endl;

    return 0;
}