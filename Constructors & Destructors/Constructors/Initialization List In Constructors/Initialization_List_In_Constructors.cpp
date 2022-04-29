#include<iostream>
using namespace std;

/*
Syntax for initialization list in constructor:
constructor (argument-list) : initilization-section
{
    assignment + other code;
}

class test{
    int a;
    int b;
    public:
        Test(int i, int j) : a(i), b(j){constructor-body}
};
*/

class test
{
    int maths, physics;  // >>> maths is declared first so it is also initialized first.
    public:
    test(int m, int p) : maths(m), physics(p)
    // test(int m, int p) : maths(m), physics(m+p)
    // test(int m, int p) : maths(2*m+p), physics(m)
    // test(int m, int p) : maths(m), physics(maths + p + m) //As maths is initialized already.
    // test(int m, int p) : maths(physics + m), physics(p)   //Garbage Value as maths is initialized first so it cant be initialized with 'physics' as it is not yet initialized...
    {
        cout<<"Maths Marks : "<<maths<<"\tPhysics Marks : "<<physics<<endl;
    }
};

int main()
{
    test t(45, 45);
    return 0;
}