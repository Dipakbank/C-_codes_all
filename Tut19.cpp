//Function overloading 
//Output is given as comment at the end of the code

# include <iostream> 
using namespace std;

int sum(int a,int b)
{   cout<<"Sum of 2 int is :"<<endl;
    return a +b ;

}

int sum(int a,int b, int c)
{   cout<<"Sum of 3 int is :"<<endl;
    return a +b +c;
}
//***********************************************
float volume(float a)
{
    cout<<"Volume of square is :"<<endl;
    return (a*a*a);
}

float volume(float a, float b, float c)
{
    cout<<"Volume of rectangle is :"<<endl;
    return (a*b*c);
}

float volume(float r, float h)
{
    cout<<"Volume of cylinder is :"<<endl;
    return (3.14*r*r*h);
}

int main()
{
    cout<<sum(3, 4)<<endl;
    cout<<endl;
    cout<<sum(3, 4, 50)<<endl;
    cout<<endl;
    //Same name function with different no. of parameter
    cout<<"The valume of square is"<<endl<<volume(2)<<endl;
    cout<<endl;
    cout<<"The valume of cylinder is"<<endl<<volume(2,5)<<endl;
    cout<<endl;
    cout<<"The valume of rectangle is"<<endl<<volume(2,5,4)<<endl;

    


}


/*
Output will look like
GIVEN below


Sum of 2 int is :        
7

Sum of 3 int is :        
57

Volume of square is :    
The valume of square is  
8

Volume of cylinder is :  
The valume of cylinder is
62.8

Volume of rectangle is : 
The valume of rectangle is
40
*/