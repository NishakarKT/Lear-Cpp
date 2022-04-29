#include<iostream>
using namespace std;

class complex
{
    int real, imaginary;

    public:
    complex(int a, int b=0)
    {
        real = a;
        imaginary = b;
    }
    void printcomplex(void)
    {
        cout<<real<<" + "<<imaginary<<"i\n";
    }
};

int main()
{
    complex z1(2,3), z2(2);

    z1.printcomplex();
    z2.printcomplex();
    
    system("PAUSE");
    return 0 ;
}