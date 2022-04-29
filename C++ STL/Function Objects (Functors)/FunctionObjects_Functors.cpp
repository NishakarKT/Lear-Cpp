#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

//Function Objects : Function wrapped in a Class...

int main()
{
    int arr[] = {791, 123, 24, 412, 254, 27};
    sort(arr, arr + 5); //sorts first 5 elements ONLY...
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i]<<endl;
    }
    cout<<endl;

    sort(arr, arr+6, greater<int>()); //Descending Order
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i]<<endl;
    }
    cout<<endl;

    system("PAUSE");
    return 0;
}