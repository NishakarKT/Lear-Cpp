#include <iostream>
using namespace std;

inline double amount(double money, double time, double rate = 4/*Default argument*/)
                                                //Write the default argument at last.
{
    return (money + money*time*rate/100);
}

int main()
{
    int z;
    double money, rate, time;

    cout << "Enter Principal Amount : ";
    cin >> money;
    cout << "Enter time in Years : ";
    cin >> time;
    cout << "Are you a VIP ???\n1 = YES\n2 = NO\n";
    cin >> z;

    switch (z)
    {
    case 1:
        cout << "Final Amount : " << amount(money, time, 10) << endl;
        break;

    case 2:
        cout << "Final Amount : " << amount(money, time) << endl;
        break;

    default:
        cout << "Final Amount : " << amount(money, time) << endl;
        break;
    }

    system("PAUSE");
    return 0;
}