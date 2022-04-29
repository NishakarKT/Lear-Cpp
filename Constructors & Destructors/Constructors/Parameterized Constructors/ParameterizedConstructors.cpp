#include<iostream>
using namespace std;

class complex 
{
    int real, imaginary;
    public:
    //complex (void); //Default Constructor which doesnt accept parameters.
    complex (int, int); //Parametrised Constructor which accepts parameters.
    void printcomplex(void)
    {
        cout<<real<<" + "<<imaginary<<"i\n";
    }
};

complex:: complex(int x, int y)
{
    real=x;
    imaginary=y;
}


int main()
{
    complex a(3,4);  //Implicit call.
    complex b = complex (3,4);  //Expilicit call

    a.printcomplex();     //Same Result...  
    b.printcomplex();     //Same Result...

    system("PAUSE");
    return 0 ;
}