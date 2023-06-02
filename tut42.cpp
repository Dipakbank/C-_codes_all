#include<iostream>
using namespace std;

class calculator 
{
    protected:
    int a , b,op_num;
    public:
    void Take_input()
    {   
        cout<<"Two numbers are : "<<endl;
        
        cin>>a ; 
        cin>>b ;
        cout<<"Describe the operation :"<<endl;
        cin>>op_num;
        if (op_num ==1)
        {
            add();
        }
        else if (op_num ==2)
        {
            /* code */
            sub();
        }
        else if (op_num == 3)
        {
            /* code */
            mult();
        }
        else if (op_num ==4)
        {
            div();
        }
        
        
        

    }
    int add()
    {
        cout<< " result is "<< (a+b)<<endl;
    }
    int sub()
    {
        cout<< " result is "<< (a-b)<<endl;
    }
    int mult()
    {
        cout<< " result is "<< (a*b)<<endl;
    }
    float div()
    {
        cout<< " result is "<< float(a/b)<<endl;
    }

};

int main(){
    calculator  c;
    c.Take_input();
    
    return 0;
}      