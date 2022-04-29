#include<iostream>
using namespace std;

class A
{
    int a;
    public:

    // void setdata(int a)
    // {
    //     a = a;    //Garbage value in output
    // }

    A & setdata(int a)
    {
        this->a = a;
        //this also helps in returning objects.
        return *this;
    }
    void getdata(void)
    {
        cout<<"The value of 'a' = "<<a<<endl;
    }
};

int main()
{
    A a;
    a.setdata(4).getdata();
    // a.getdata();
    return 0 ;
}