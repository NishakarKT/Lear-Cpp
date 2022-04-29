#include<iostream>
using namespace std;

int main()
{
    // float a;

    // cout<<"Enter a (A decimal number) : ";
    // cin>>a;

    // int b=int(a); //code it after a is input.
    // int c=(int)a;
    // int d=(int)(a); 

    // cout<<"Value of a after typecasting it to int : "<<(int)a<<endl;
    // cout<<"Value of a after typecasting it to int : "<<int(a)<<endl;
    // cout<<"Value of a after typecasting it to int : "<<(int)(a)<<endl;
    // cout<<"Value of a after typecasting it to int : "<<b<<endl;
    // cout<<"Value of a after typecasting it to int : "<<c<<endl;
    // cout<<"Value of a after typecasting it to int : "<<d<<endl;

    float a = 45;
    float b =45.45;

    cout<<"a + b = "<<a + b<<endl;
    cout<<"a + int(b) = "<<a + int(b)<<endl;
    cout<<"a + (int)b = "<<a + (int)b<<endl;
    cout<<"a + (int)(b) = "<<a + (int)(b)<<endl;

    system("PAUSE");
    return 0 ;
}