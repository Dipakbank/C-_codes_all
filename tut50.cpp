#include<iostream>
using namespace std;


int main(){
    int a = 4;
    int* ptr = &a;
    cout <<" The value of a is : "<<*(ptr)<<endl;

// New operator 

    double *p = new double(34.44);         //imp
    cout <<" The value at p is : "<<(*p)<<endl;
    int* arr = new int[3];                  //imp
    arr[0] = 44;
    arr[1] = 1;   
    arr[2] = 2;
    // delete arr;
    // delete[] arr;
    cout <<" The adress of arr is : "<<(arr)<<endl;       //adress of an arrey
    cout <<" The value at arr[0] / arr is : "<<*(arr)<<endl;
    cout <<" The value at arr[0] is : "<<(arr[0])<<endl;
    cout <<" The value at arr[1] is : "<<(arr[1])<<endl;
    cout <<" The value at arr[1] is : "<<*(arr+1)<<endl;    // Next value of contigous memory
    cout <<" The value at arr[1] is : "<<&(arr[1])<<endl;     //adress of an arrey element
    cout <<" The value at arr[2] is : "<<(arr[2])<<endl;


    return 0;
}