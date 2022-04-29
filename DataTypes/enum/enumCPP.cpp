#include<iostream>
using namespace std;

int main()
{
    enum meal{breakfast, lunch, dinner}; //meal is now a datatype which has assigned "breakfast", "lunch" and "dinner" values 0, 1 & 2 respectively to increase readability.
    meal a=breakfast, b=lunch, c=dinner;

    cout<<"Value of a : "<<a<<endl;
    cout<<"Value of b : "<<b<<endl;
    cout<<"Value of c : "<<c<<endl;

    cout<<"Truth value of a==1 : "<<(a==1)<<endl;
    cout<<"Truth value of a!=1 : "<<(a!=1)<<endl;

    system("PAUSE");
    return 0 ;
}