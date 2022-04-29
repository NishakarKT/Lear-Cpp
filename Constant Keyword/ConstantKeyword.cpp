#include <iostream>
using namespace std;

int main()
{
    const int a = 34;

    cout << "Old value of a : " << a << endl;

    //a = 45;  //Error as you cant change the value of a variable initially declared constant.
    
    cout << "New value of a : " << a << endl;

    system("PAUSE");
    return 0;
}