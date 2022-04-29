#include <iostream>
using namespace std;

template <class T>
class Nishakar
{
public:
    T data;
    Nishakar(T a)
    {
        data = a;
    }
    void display(void);
};

/* ********** Writing Functions using Scope Resolution Operator ********** */
template <class T>
void Nishakar<T> :: display()
{
    cout<<"data = "<<data<<endl;
}
/* *********************************** */

void func(int a) // --------> (1)
{
    cout<<"I am normal func : "<<a<<endl;
}

template <class T>
void func(int a) // ---------> (2)
{
    cout<<"I am templatized func : "<<a<<endl;
}

template <class T>
void func1(T a)  // ---------> (3)
{
    cout<<"I am templatized func : "<<a<<endl;
}

int main()
{
    // Nishakar<float> n1(1.23);
    // Nishakar<char> n2('A');
    // n1.display();
    // n2.display();

    /* ***** Function Overloading ***** */

    func(5); //This calls (1), the exact match...
    func1(5); //This must call (3), no other choice...
    return 0;
}