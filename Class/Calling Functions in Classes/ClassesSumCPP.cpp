#include <iostream>
using namespace std;

class calc
{
    public:
    int a;
    int b;
    void sum(int, int);
};

void calc :: sum(int a, int b)
{
    cout<<a<<" + "<<b<<" = "<<a+b<<endl;
}

int main()
{
    calc sum;

    cout<<"Enter Number 1 : ";
    cin>>sum.a;
    cout<<"Enter Number 2 : ";
    cin>>sum.b;

    sum.sum(sum.a, sum.b);

    system("PAUSE");
    return 0;
}