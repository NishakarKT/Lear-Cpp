#include <iostream>
using namespace std;

int main()
{
    // int *ptr1, **ptr2;
    // int a = 15;
    // ptr1 = &a;
    // ptr2 = &ptr1;

    // cout << "Address of 'a' is " << ptr1 << endl;
    // cout << "Value at Address of 'a' is " << *ptr1 << endl;
    // cout << "Address of 'ptr1' is " << ptr2 << endl;
    // cout << "Value at Address of 'ptr1' is " << *ptr2 << endl;
    // cout << "Value at Address of 'a' is " << **ptr2 << endl;


    int a = 25;
    int *p = &a;
    int **q=&p; //Pointer that stores the address of a Pointer.

    cout<<"Value of Address of a : "<<p<<endl;
    cout<<"Value at Address of a : "<<*p<<endl;
    cout<<"Value of Address of p : "<<q<<endl;
    cout<<"Value at Address of p : "<<*q<<endl;
    cout<<"Value at Address of a : "<<**q<<endl;

    system("PAUSE");
    return 0;
}