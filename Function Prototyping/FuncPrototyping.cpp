#include<iostream>
using namespace std;

// int sum(int a, int b)
// {
//     return a+b;
// }

//Function Prototyping gives an assurity to the Compiler that we may have the sum function after the main function.
int sum(int, int);

int main()
{
    int a, b;

    cout<<"Enter a : ";
    cin>>a;
    cout<<"Enter b : ";
    cin>>b;

    cout<<a<<" + "<<b<<" = "<<sum(a,b)<<endl;

    system("PAUSE");
    return 0 ;
}

//If we declare sum function after main function, the program will throw an error.
//so to fix this we do function prototyping.
int sum(int a, int b)
{
    return a+b;
}