#include <iostream>
using namespace std;

// ******************Properties of Friend Function*********************
// Not in the scope of the class.
// Since it is not in the scope of the class, it cannot be called from the object of that class, for example, sumComplex() is invalid.
// A friend function can be invoked without the help of any object.
// Usually contain objects as arguments.
// Can be declared under the public or private access modifier, it will not make any difference.
// It cannot access the members directly by their names, it needs (object_name.member_name) to access any member.

class complex
{
    int a, b;
    friend void sum(complex, complex);  //without mentioning void sum as my friend , it can'y access mt private members 'a' and 'b'.

public:
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }
    void printdata(void)
    {
        cout << a << " + " << b << " i";
    }
};

void sum(complex z1, complex z2)
{
    complex z3;
    z3.a = z1.a + z2.a;
    z3.b = z1.b + z2.b;
    cout<<z3.a<<" + "<<z3.b<<" i\n";
}

int main()
{
    complex z1, z2;
    int n;

    z1.setdata(2,3);
    z2.setdata(1,2);
    sum(z1,z2);

    system("PAUSE");
    return 0;
}