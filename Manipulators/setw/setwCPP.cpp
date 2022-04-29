#include<iostream>
#include<iomanip>

using namespace std;

//setw used in a way to right justify the output.

int main()
{
    double a, b, c;

    cout<<"a : ";
    cin>>a;
    cout<<"b : ";
    cin>>b;
    cout<<"c : ";
    cin>>c;
    
    cout<<"a = "<<setw(10)<<a<<endl;
    cout<<"b = "<<setw(10)<<b<<endl;
    cout<<"c = "<<setw(10)<<c<<endl;

    system("PAUSE");
    return 0 ;
}