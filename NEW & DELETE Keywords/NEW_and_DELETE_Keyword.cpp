#include <iostream>
using namespace std;

int main()
{
    // float *arr = new float(1.234567); //Dynamically Allocates the value
    // cout<<"Value that arr points to is : "<<*arr<<endl;

    //NEW Keyword/Operator

    int *arr = new int[100];
    for (int i = 0; i < 100; i++)
    {
        arr[i] = i + 1;
    }
    for (int i = 0; i < 100; i++)
    {
        cout << arr[i] << " ";
    }

    //DELETE Keyword/Operator

    cout<<endl<<"After freeing the array..."<<endl;

    delete arr; //Syntax : delete arr; or delete[] arr;

    for (int i = 0; i < 100; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}