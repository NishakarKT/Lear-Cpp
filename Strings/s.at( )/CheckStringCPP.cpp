#include <iostream>
#include <string>
using namespace std;

int main()
{
    int j;
    string s;

    cout << "Enter a String to check if it's a Binary String : ";
    cin >> s;

    for (int i = 0; i < s.length() /*To check String Length*/; i++)
    {
        j=0;
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            j++;
            cout << "The input string is not a valid Binary String.\n";
            break;
        }
    }
    if(j==0)
    {
        cout<<"The input String is a Valid Binary String.\n";
    }

    system("PAUSE");
    return 0;
}