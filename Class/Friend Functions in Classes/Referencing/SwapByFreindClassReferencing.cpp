#include<iostream>
using namespace std;

class Y;

class X
{
    int val;
    friend void swap(X &, Y &);
    public :
    void setdata(void)
    {
        cout<<"Set value : ";
        cin>>val;
    }
    void printdata(void)
    {
        cout<<"Val = "<<val<<endl;
    }
};
class Y
{
    int val;
    friend void swap(X &, Y &);
    public : 
    void setdata(void)
    {
        cout<<"Set value : ";
        cin>>val;
    }
    void printdata(void)
    {
        cout<<"Val = "<<val<<endl;
    }
};

void swap(X &x, Y &y)
{
    int c=x.val;
    x.val=y.val;
    y.val=c;
}

int main()
{
    X x;
    Y y;

    x.setdata();
    y.setdata();
    swap(x, y);
    cout<<"swapped x = ";
    x.printdata();
    cout<<"swapped y = ";
    y.printdata();

    system("PAUSE");
    return 0 ;
}