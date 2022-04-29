#include <iostream>
using namespace std;

/* ***** Average ***** */

// template <class T1, class T2>
// float avg (T1 a, T2 b)
// {
//     return (a+b)/2.0;
// }

// int main()
// {
//     float a;
//     a = avg(5.6524, 3.675);
//     cout<<a<<endl;
//     return 0 ;
// }

/* ***** Swapping ***** */

template <class T>
void swappp(T &a, T &b)
{
    T c;
    c = a;
    a = b;
    b = c;
}

int main()
{
    float num1, num2;

    cout << "Enter Number 1 : ";
    cin >> num1;
    cout << "Enter Number 2 : ";
    cin >> num2;

    // swap(num1, num2); //swap name is already taken in std.
    swappp(num1, num2);

    cout << "NUmber 1 : " << num1 << "\tNumber 2 : " << num2 << endl;
    system("PAUSE");
    return 0;
}
