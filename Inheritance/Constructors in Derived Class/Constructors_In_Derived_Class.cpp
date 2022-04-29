#include <iostream>
using namespace std;

/*

Case1:
class B: public A
{
   // Order of execution of constructor -> first A() then B()
};

Case2:
class A: public B, public C
{
    // Order of execution of constructor -> B() then C() and A()
};

Case3:
class A: public B, virtual public C
{
    // Order of execution of constructor -> C() then B() and A()
};

*/

class base1
{
    int data1;

public:
    base1(int i)
    {
        data1 = i;
        cout << "Base1 Constructor Executed..." << endl;
    }
    void printdata1(void)
    {
        cout << "data1 = " << data1 << endl;
    }
};

class base2
{
    int data2;

public:
    base2(int j)
    {
        data2 = j;
        cout << "Base2 Constructor Executed..." << endl;
    }
    void printdata2(void)
    {
        cout << "data2 = " << data2 << endl;
    }
};

// class derived : public base1, public base2       //Order matters (If no 'virtual base class' used)  //This leads to the execution of base 1 constructor before base 2 constructor...
class derived : public base1, virtual public base2   //'Virtual base' causes execution of base 2 constructor first...
{
    int derived1, derived2;

public:
    derived(int a, int b, int c, int d) : base1(a), base2(b)
    {
        derived1 = c;
        derived2 = d;
        cout<<"Derived Constructor Executed..."<<endl;
    }
    void printdata(void)
    {
        cout << "derived1 = " << derived1 << endl;
        cout << "derived2 = " << derived2 << endl;
    }
};

int main()
{
    derived d1(1, 2, 3, 4);

    d1.printdata1();
    d1.printdata2();
    d1.printdata();

    return 0;
}