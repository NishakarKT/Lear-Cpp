#include <iostream>
using namespace std;

class base
{
public:
    int base_var = 10;
    virtual void display(void)  //Virtual implies if 'base' class pointer points to derived class object and the display function is called...use the display function of the derived class...
    {
        cout << "1) base_var = " << base_var << endl;
    }
};

class derived : public base
{
public:
    int derived_var = 20;
    void display(void)
    {
        cout << "2) base_var = " << base_var << endl;
        cout << "3) derived_var = " << derived_var << endl;
    }
};

int main()
{
    base *base_ptr; 
    derived derived_obj;
    base_ptr = &derived_obj;

    // (*base_ptr).display();  OR
    base_ptr->display(); //Run-Time Polymorphism is achieved...

    system("PAUSE");
    return 0;
}