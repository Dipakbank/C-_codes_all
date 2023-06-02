// Pointers to derived class
// And virtual Function
#include <iostream>
using namespace std;

class Baseclass
{
public:
    int var1 = 78;
    void display()          //  Base class pointer pointed to derived class , 
      //    ^                        Still  calling  display() function
      //    | ___________________________________________|
//           CALLED: Late Binding


    // void virtual   display()           // Vartual Function is here
                                            // to overwrite default behavior
    {
        cout << "base = " << var1 << endl;
    }
};
class Derivedclass : public Baseclass
{
public:
    int var2 = 99;
    void display()

    {
        cout << "derivedd class = "<<var2 << endl;
    }
};



int main()
{       /*            
    Baseclass *baseclass_pointer;
    Baseclass obj_base;
    Derivedclass obj_derived;
    baseclass_pointer = &obj_derived;
    baseclass_pointer->var1 = 5;
    // baseclass_pointer->var2 = 5;            // Will through an error
    baseclass_pointer->display();
    // baseclass_pointer->var2 = 9;   //can't do
    Derivedclass * derivedclass_pointer;
    derivedclass_pointer->var2 = 9;
    derivedclass_pointer->var1 = 9;
    derivedclass_pointer->display();
   

   */     

// Baseclass * pointer_base;
// Derivedclass * pointer_derived;

// Baseclass obj_base;
// Derivedclass obj_derived;
// pointer_base = &obj_derived;                      // From video no 55
// pointer_base->display(); 

// pointer_derived->var2= 34;
// pointer_derived->var1 = 78;
    return 0;
}

