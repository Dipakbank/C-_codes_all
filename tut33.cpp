//      Dynamic Initialization of object using Constructors  

#include <iostream>
using namespace std;

class Bankdeposite
{
    int principal;
    int year;
    float interestRate;
    float returnValue;

public:
    Bankdeposite() {}
    Bankdeposite(int p, int y, float r);
    Bankdeposite(int p, int y, int r);
    void show();
};

Bankdeposite ::Bankdeposite(int p, int y, float r)
{
    principal = p;
    year = y;
    interestRate = r;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        /* code */
        returnValue = returnValue * (1 + r);
    }
}

Bankdeposite ::Bankdeposite(int p, int y, int r)
{
    principal = p;
    year = y;
    interestRate = float(r) / 100;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        /* code */
        returnValue = returnValue * (1 + interestRate);
    }
}

void Bankdeposite ::show()
{
    cout << "The principal amount was " << principal << "." << endl;
    cout << "Return value after " << year << " years is " << returnValue << endl;
}
int main()
{
    Bankdeposite bd1, bd2, bd3;
    int p, y;
    float r;
    int R;

    // bd3.show();

    cout << "Enter the p , y & r " << endl;
    cin >> p >> y >> r;
    bd1 = Bankdeposite(p, y, r);
    bd1.show();

    cout << "Enter the p , y & R " << endl;
    cin >> p >> y >> R;
    bd1 = Bankdeposite(p, y, R);
    bd1.show();
    return 0;
}