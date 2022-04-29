#include <iostream>
using namespace std;

//Class ---> Object //Here 'class' is a template for 'Object'...
//Template ---> Class // Here 'Template' is the template for 'Class'...
//Templates are also known as Parameterized Classes.
//Templates support --->  1. DRY Principle(Don't Repeat Yourself).
//                        2. Generic Programming.

/* ****************************************************************************** */

// class vector
// {
// public:
//     int *arr;
//     int size;
//     vector(int m)
//     {
//         size = m;
//         arr = new int[size];
//     }
//     int dotprod(vector &v)
//     {
//         int dp = 0;
//         for (int i = 0; i < size; i++)
//         {
//             // dp = dp + arr[i]*v.arr[i];
//             dp += this->arr[i]*v.arr[i];  //this pointer points to the arr of the current class.
//         }
//         return dp;
//     }
// };

//Replace custom data types by T which you dont want to pre-decide...

template <class T>
class vector
{
public:
    T *arr;
    int size;
    vector(int m)
    {
        size = m;
        arr = new T[size];
    }
    T dotprod(vector &v)
    {
        T dp = 0;
        for (int i = 0; i < size; i++)
        {
            // dp = dp + arr[i]*v.arr[i];
            dp += this->arr[i]*v.arr[i];  //this pointer points to the arr of the current class.
        }
        return dp;
    }
};

int main()
{
    /* ***** INT ***** */

    // vector <int>v1(3);
    // v1.arr[0] = 1;
    // v1.arr[1] = 2;
    // v1.arr[2] = 3;
    // vector <int>v2(3);
    // v2.arr[0] = 6;
    // v2.arr[1] = 5;
    // v2.arr[2] = 4;
    // int a = v1.dotprod(v2);
    // cout << "Dot Product = " << a << endl;

    /* ***** FLOAT ***** */

    vector <float>v1(3);
    v1.arr[0] = 1.1;
    v1.arr[1] = 2.2;
    v1.arr[2] = 3.3;
    vector <float>v2(3);
    v2.arr[0] = 6.6;
    v2.arr[1] = 5.5;
    v2.arr[2] = 4.4;
    float a = v1.dotprod(v2);
    cout << "Dot Product = " << a << endl;

    //If you wouldn't have used template than you would have to create 2 separate classes for int and float datatypes...

    return 0;
}