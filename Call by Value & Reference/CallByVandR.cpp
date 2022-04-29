#include<iostream>
using namespace std;

void swap1(int x, int y)
{
    int z = x;
    x=y;
    y=z;
}

void swap2(int *x, int *y)
{
    int z = *x;
    *x=*y;
    *y=z;
}

int main()
{
    int a, b;

    cout<<"Enter a : ";
    cin>>a;
    cout<<"Enter b : ";
    cin>>b;

    // cout<<"a = "<<a<<endl<<"b = "<<b<<endl;
    // swap1(a,b);
    // cout<<"a = "<<a<<endl<<"b = "<<b<<endl;
    //In the above method numbers dont get swapped as when the swap function is called, "copy" of 'a' & 'b' go to the function.
    //So change in the values of their copies wont effect the actual values of these actual parameters.
    //We have to pass the address instead.

    int *p=&a, *q=&b;
    
    cout<<"a = "<<a<<endl<<"b = "<<b<<endl;
    swap2(p,q);
    cout<<"a = "<<a<<endl<<"b = "<<b<<endl;

    system("PAUSE");
    return 0 ;
}