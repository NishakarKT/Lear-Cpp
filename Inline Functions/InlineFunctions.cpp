#include<iostream>
using namespace std;

inline int product(int a, int b)
{
    return a*b;  //A short code so we can inline it to make the code more efficient.
}

int main()
{
    int a, b;
    time_t start, end;

    cout<<"Enter a : ";
    cin>>a;
    cout<<"Enter b : ";
    cin>>b;

    cout<<a<<" x "<<b<<" = "<<product(a,b)<<endl;

    system("PAUSE");
    return 0 ;
}