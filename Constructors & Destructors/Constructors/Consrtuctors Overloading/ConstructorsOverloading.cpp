#include <iostream>
using namespace std;

class complex
{
    double real, imaginary;

public:
    complex(int x, int y)
    {
        real = x;
        imaginary = y;
    }
    complex(double x, double y)
    {
        real = x;
        imaginary = y;
    }
    complex(int x)
    {
        real = x;
        imaginary=0;
    }
    void printcomplex(void)
    {
        cout<<real<<" + "<<imaginary<<"i\n";
    }
};

int main()
{
    complex z1(2,3), z2(1.234, 8.324), z3(3);

    cout<<"The complex Numbers are : "<<endl;
    z1.printcomplex();
    z2.printcomplex();
    z3.printcomplex();


    system("PAUSE");
    return 0;
}