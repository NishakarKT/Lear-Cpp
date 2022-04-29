#include<iostream>
using namespace std;

class base1
{
    public:
    void greet(void)
    {
        cout<<"Good Morning!!!"<<endl;
    }
};

class base2
{
    public:
    void greet(void)
    {
        cout<<"Good Afternoon!!!"<<endl;
    }
};

class base3
{
    public:
    void greet(void)
    {
        cout<<"Good Night!!!"<<endl;
    }
};

class derived : public base1, public base2, public base3
{
    public:
    void greet(void)
    {
        base1::greet(); //Ambiguity Resolution in Inheritance.
        //We have to mention which 'greet' is to be used...as all the inherited classes have the same function named 'greet'.
        //But if the derived clas has its own 'greet' function, it is the first priority.
    }
};

int main()
{
    derived d;
    d.greet();
    return 0 ;
}