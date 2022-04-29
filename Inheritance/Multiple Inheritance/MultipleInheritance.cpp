#include <iostream>
using namespace std;

class base1
{
protected:
    int base1_int = 10;
};

class base2
{
protected:
    int base2_int = 20;
};

class base3
{
protected:
    int base3_int = 30;
};

class derived : public base1, public base2, public base3
{
public:
    void getdata(void)
    {
        cout << "base1 int = " << base1_int << endl;
        cout << "base2 int = " << base2_int << endl;
        cout << "base3 int = " << base3_int << endl;
    }
};

int main()
{
    derived d;
    d.getdata();

    return 0;
}