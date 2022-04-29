#include<iostream>
using namespace std;

class complex
{
    public:
    int a;
    int b;
    void getdata(int x, int y)
    {
        a=x;
        b=y;
    }
    void sumup(complex z1, complex z2)
    {
        a=z1.a + z2.a;
        b=z1.b + z2.b;
    }
    void printdata(void)
    {
        cout<<"("<<a<<" + "<<b<<"i)";
    }
};

int main()
{
    complex c1, c2, c3;

    cout<<"Enter 'x' of Complex Number 1 : ";
    cin>>c1.a;
    cout<<"Enter 'y' of Complex Number 1 : ";
    cin>>c1.b;
    cout<<"Enter 'x' of Complex Number 2 : ";
    cin>>c2.a;
    cout<<"Enter 'y' of Complex Number 2 : ";
    cin>>c2.b;

    c3.sumup(c1,c2);
    c1.printdata();
    cout<<" + ";
    c2.printdata();
    cout<<" = ";
    c3.printdata();
    cout<<endl;

    system("PAUSE");
    return 0 ;
}