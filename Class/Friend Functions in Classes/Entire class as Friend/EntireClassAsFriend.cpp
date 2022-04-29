#include <iostream>
using namespace std;

class complex;

class calculator
{
    int real, imaginary;

public:
    void complexsum(complex z1, complex z2);
    void complexdiff(complex z1, complex z2);
    void complexprod(complex z1, complex z2);
    void printcomplex(void)
    {
        cout << real << " + " << imaginary << "i" << endl;
    }
};

class complex
{
    int real, imaginary;

    // friend void calculator ::complexsum(complex, complex);
    // friend void calculator ::complexdiff(complex, complex);
    // friend void calculator ::complexprod(complex, complex);

    //or

    friend class calculator;  //This makes the private members of the Complex class accessible to the entire calculator class.

public:
    void complexinput(void)
    {
        cout << "Enter Real Part of the Complex Number : ";
        cin >> real;
        cout << "Enter Real Part of the Complex Number : ";
        cin >> imaginary;
    }
};

void calculator ::complexsum(complex z1, complex z2)
{
    real = z1.real + z2.real;
    imaginary = z1.imaginary + z2.imaginary;
}

void calculator ::complexdiff(complex z1, complex z2)
{
    real = z1.real - z2.real;
    imaginary = z1.imaginary - z2.imaginary;
}

void calculator ::complexprod(complex z1, complex z2)
{
    real = (z1.real) * (z2.real) - (z1.imaginary) * (z2.imaginary);
    imaginary = (z1.real) * (z2.imaginary) + (z1.imaginary) * (z2.real);
}

int main()
{
    int z;
    calculator z3;
    complex z1, z2;

start:

    cout << "Choose an Operation : \n1 = Addition of Complex Numbers\n2 = Subtraction of Complex Numbers\n3 = Multiplication of Complex Numbers\n";
    cin >> z;

    cout << "Input for Complex Number 1 : \n";
    z1.complexinput();
    cout << "Input for Complex Number 2 : \n";
    z2.complexinput();

    switch (z)
    {
    case 1:
        z3.complexsum(z1, z2);
        cout << "Final Result : \n";
        z3.printcomplex();
        break;

    case 2:
        z3.complexdiff(z1, z2);
        cout << "Final Result : \n";
        z3.printcomplex();
        break;

    case 3:
        z3.complexprod(z1, z2);
        cout << "Final Result : \n";
        z3.printcomplex();
        break;

    default:
        cout << "Invalid Input...\n";
        goto start;
        break;
    }

    system("PAUSE");
    return 0;
}