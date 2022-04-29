#include <iostream>
using namespace std;

class shop
{
public:
    int *ItemID;
    int *ItemPrice;
    int c;
    void Set(void) { c = 0; }
    void GetPrice(void);
    void DisplayPrice(void);
};

void shop ::GetPrice(void)
{
    cout << "Enter Item ID : ";
    cin >> ItemID[c];
    cout << "Enter Price : ";
    cin >> ItemPrice[c];
    c++;
}

void shop ::DisplayPrice(void)
{
    for (int i = 0; i < c; i++)
    {
        cout << "Item ID : " << ItemID[i] << "\tPrice : " << ItemPrice[i] << endl;
    }
}

int main()
{
    int n;
    shop data;

    for (int i = 0;; i++)
    {
        cout << "Enter total Number of Items : ";
        cin >> n;
        data.ItemID = (int *)malloc(n * sizeof(int));
        data.ItemPrice = (int *)malloc(n * sizeof(int));

        data.Set();
        for (int i = 0; i < n; i++)
        {
            data.GetPrice();
        }
        data.DisplayPrice();

        free(data.ItemID);
        free(data.ItemPrice);
    }
    return 0;
}