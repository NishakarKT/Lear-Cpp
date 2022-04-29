#include<iostream>
using namespace std;

float sum(float a, double b)  //Even if we pass a int variable, it will get converted to float or double accordingly and proceed.
{
    return a + b;
}

float sum(float a, double b, long double c)
{
    return a + b + c;
}

int main()
{
    int a, b, c;

    cout<<"Enter a : ";
    cin>>a;
    cout<<"Enter b : ";
    cin>>b;
    cout<<"Enter c : ";
    cin>>c;

    cout<<a<<" + "<<b<<" = "<<sum(a,b)<<endl;
    cout<<a<<" + "<<b<<" + "<<c<<" = "<<sum(a,b,c)<<endl;

    system("PAUSE");    
    return 0 ;
}