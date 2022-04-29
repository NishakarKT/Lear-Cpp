#include<iostream>
using namespace std;

template <class T>
class Nishakar
{
    T data;
    public :
    Nishakar(T a)
    {
        data = a;
    }
    void process(T a);
    void display(void);
};

template <class T>
void Nishakar<T> :: process(T a)
{
    data = data*a;
}

template <class T>
void Nishakar<T> :: display()
{
    cout<<"Data = "<<data<<endl;
}

int main()
{
    Nishakar <float>n1(5.654);
    n1.process(2.345);
    n1.display();
    return 0 ;
}