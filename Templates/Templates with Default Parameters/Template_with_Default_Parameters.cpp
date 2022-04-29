#include <iostream>
using namespace std;

template <class T = int>
class Nishakar
{
    T age;

public:
    Nishakar(T age)
    {
        this->age = age;
    }
    void display(void)
    {
        cout << "My Age : " << age << endl;
    }
};

int main()
{
    Nishakar<> data1(19);         //Nothing Specified --> int is used (default)
    Nishakar<float> data2(19.45); //Specified --> float is used (default)

    data1.display();
    data2.display();
    return 0;
}