#include <iostream>
using namespace std;

class shop
{
    int id;
    float price;

public:
    void setdata(int a, float b)
    {
        id = a;
        price = b;
    }
    void getdata(void)
    {
        cout << "Item ID : " << id;
        cout << "\tItem Price : " << price << endl;
    }
};

int main()
{
    int a, n;
    float b;

    cout << "How many items do you want to register the details of : ";
    cin >> n;
    shop *item = new shop[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter Item ID : ";
        cin >> a;
        cout << "Enter Item Price : ";
        cin >> b;
        (*(item + i)).setdata(a, b);
    }

    for (int i = 0; i < n; i++)
    {
        (*(item + i)).getdata();
    }

    return 0;
}