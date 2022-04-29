#include<iostream>
using namespace std;

void swapbyref(int &x, int &y)
{
    int z=x;
    x=y;
    y=z;
}

int main()
{
    int a, b;

    cout<<"Enter a : ";
    cin>>a;
    cout<<"Enter b : ";
    cin>>b;

    cout<<"Old values...\n";
    cout<<"a = "<<a<<endl<<"b = "<<b<<endl;
    swapbyref(a, b);
    cout<<"New Values...\n";
    cout<<"a = "<<a<<endl<<"b = "<<b<<endl;

    system("PAUSE");
    return 0 ;
}