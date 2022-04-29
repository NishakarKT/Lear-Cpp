#include<iostream>
using namespace std;

int fibonacci(int n)
{
    if(n==1)
    {
        return 0;
    }
    if(n==2)
    {
        return 1;
    }
    else
    {
        return fibonacci(n-2)+fibonacci(n-1);
    }
}

int main()
{
    int n;

    cout<<"How many members of the Fibonacci Sequence do you want to print ???\n";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        cout<<fibonacci(i)<<" ";
    }
    cout<<endl;

    system("PAUSE");
    return 0 ;
}