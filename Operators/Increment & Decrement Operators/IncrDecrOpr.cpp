#include<iostream>
using namespace std;

int main()
{
    int a, c;

    cout<<"Enter a : ";
    cin>>a;
    
    choose :
    cout<<"Choose :\n1 = a++\n2 = ++a\n3 = a--\n4 = --a\n";
    cin>>c;

    switch(c)
    {
        case 1:
        cout<<"a++ = "<<a++<<endl;
        break;

        case 2:
        cout<<"++a = "<<++a<<endl;
        break;

        case 3:
        cout<<"a-- = "<<a--<<endl;
        break;

        case 4:
        cout<<"--a = "<<--a<<endl;
        break;

        default:
        cout<<"Invalid Input...\n";
        break;
    }
    cout<<"Current value of a = "<<a<<endl;
    goto choose;

    system("PAUSE");
    return 0 ;
}