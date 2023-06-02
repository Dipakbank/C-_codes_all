#include<iostream>
using namespace std;

class be{
    friend sumsne(int c);
    int a ,b ,c , d ;
    public :
    void sum(int a,int b){
        c = a+b;
        cout<<c<<endl;
    }

};

be sumsne( int c)
{
    be d;
    cout<<(d = c+1);
    return d ;
}

int main(){
    be  h ,abc;
    h.sum(23,544);
    abc = sumsne(int c);
    h.sumsne(int c);
    
    return 0;
}