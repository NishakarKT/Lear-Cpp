#include<iostream>
using namespace std;

class number
{
    int num;
    int num1;
    public:
    number(){}
    number(int, int);
    //If the compiler doesnt find any copy constructor created by us, it supplies it's own copy contructor.
    number(number &);
    void displaynum(void);
};

number :: number(int x, int y=0)
{
    num = x;
    num1 = y;
}

number :: number (number &obj)  //It only copies num and not num1 and we get a garbage value for num1.
//But when we dont create a copy contructor and compiler supplies it, compiler's copy constructor copiers everything.
{
    cout<<"Copy Constructor called ...\n";
    num=obj.num;
}

void number :: displaynum(void)
{
    cout<<"num : "<<num<<endl;
    cout<<"num1 : "<<num1<<endl;
}

int main()
{
    number a(1), b(2), c(3, 4), d;

    a.displaynum();
    b.displaynum();
    c.displaynum();

    number d(c); //Copy Constructor is invoked.
    d.displaynum();

    d=a; //Copy constructor not invoked because you created 'd' object way before.

    number e = a; //Copy Constructor will be invoked as you assigned it a just at the time of delaration.
    e.displaynum();

    system("PAUSE");
    return 0 ;
}