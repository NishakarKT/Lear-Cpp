#include <iostream>
using namespace std;

class base1
{
protected:
    int data1;

public:
    base1(int z)
    {
        data1 = z;
        cout << "Constructor of Base1 Class is executed..." << endl;
    }
    void printdata1(void)
    {
        cout << "data1 = " << data1 << endl;
    }
};

class base2
{
protected:
    int data2;

public:
    base2(int z)
    {
        data2 = z;
        cout << "Constructor of Base2 Class is executed..." << endl;
    }
    void printdata2(void)
    {
        cout << "data2 = " << data2 << endl;
    }
};

class base3
{
protected:
    int data3;

public:
    base3(int z)
    {
        data3 = z;
        cout << "Constructor of Base3 Class is executed..." << endl;
    }
    void printdata3(void)
    {
        cout << "data3 = " << data3 << endl;
    }
};

class derived : public base1, public base2, virtual public base3
{
protected:
    int data4, data5;

public:
    derived(int a, int b, int c, int d, int e) : base1(a), base2(b), base3(c), data4(d), data5(e)
    {
        cout << "Constructor od Derived Class is Executed..." << endl;
    }
    void printdata45(void)
    {
        cout<<"data4 = "<<data4<<"\tdata5 = "<<data5<<endl;
    }
};

int main()
{
    derived d1(1,2,3,4,5);
    d1.printdata1();
    d1.printdata2();
    d1.printdata3();
    d1.printdata45();
    
    return 0;
}