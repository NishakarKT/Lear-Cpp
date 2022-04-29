#include <iostream>
using namespace std;

class complex; //declaring to the Compiler that you may find the class complex ahead.

class calculator
{
    int real, imaginary;

public:
    void sum(complex z1, complex z2); //to allow sum to access private variables of class complex we have to declare as its friend function.
    // {
    //     real=z1.real+z2.real;
    //     imaginary=z1.imaginary+z2.imaginary;   //it will throw an error as the complex class you decalred earlier doesnt say anything about the variables it includes. So we shall declare our functions later.
    // }
    void printcomplex(void);
    // {
    //     cout<<real<<" + "<<imaginary<<"i\n";
    // }
};

class complex
{
    int real, imaginary;

    friend void calculator ::sum(complex z1, complex z2); //we had to put calculator class above so that when the compilers starts reading from the start, it first finds calculator class and its functions.

public:
    void input(int x, int y)
    {
        real = x;
        imaginary = y;
    }
};

void calculator ::sum(complex z1, complex z2)
{
    real = z1.real + z2.real;
    imaginary = z1.imaginary + z2.imaginary;
}

void calculator :: printcomplex(void)
{
    cout << real << " + " << imaginary << "i\n";
}

int main()
{
    complex z1, z2;
    calculator z3;

    z1.input(2, 3);
    z2.input(3, 2);

    z3.sum(z1, z2);
    z3.printcomplex();

    system("PAUSE");
    return 0;
}