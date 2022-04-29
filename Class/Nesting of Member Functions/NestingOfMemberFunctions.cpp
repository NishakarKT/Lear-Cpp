#include <iostream>
#include <string>
using namespace std;

class binary
{
string s;  //By default it is set to private.
public:
    void check_bin(void); //Or we may just write >>> void check_bin();
    void len_bin(void);
    void switch_bin(void);
    void display_bin(void);
};

void binary ::check_bin(void)
{
    int j = 0;

    cout << "Enter a Binary String : ";
    cin >> s;  //s could be accessed from here even though if it is private.
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            j++;
            cout << "The String is not a valid Binary string.\n";
            break;
        }
    }
    if (j == 0)
    {
        cout << "The String is a valid Binary string.\n";
    }
}

void binary ::len_bin(void)
{
    cout << "Enter a Binary String : ";
    cin >> s;  //s could be accessed from here even though if it is private.
    cout << "The length of the String is : " << s.length() << endl;
}

void binary ::switch_bin(void)
{
    cout << "Enter a Binary String : ";
    cin >> s;  //s could be accessed from here even though if it is private.

    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
    }

    display_bin();   //NESTING OF MEMBER FUNCTIONS...
}

void binary ::display_bin(void)
{
    cout << "The Switched String is : " << s << endl;  //s could be accessed from here even though if it is private.
}

int main()
{
    int a;
    binary bin;

choose:

    cout << "Choose : \n1 = Check Binary.\n2 = Check Length of String\n3 = Switch 1s and 0s\n";
    cin >> a;

    switch (a)
    {
    case 1:
        bin.check_bin();
        break;

    case 2:
        bin.len_bin();
        break;

    case 3:
        bin.switch_bin();
        //bin.display_bin();  >>> To show Nesting of Member functions.
        break;

    default:
        cout << "Invalid Input...";
        goto choose;
        break;
    }

    goto choose;

    system("PAUSE");
    return 0;
}