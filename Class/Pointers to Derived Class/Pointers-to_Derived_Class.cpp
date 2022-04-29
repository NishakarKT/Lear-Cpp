#include <iostream>
using namespace std;

class base
{
public:
    int base_var;
    void display(void)
    {
        cout << "Value of base_var = " << base_var << endl;
    }
};

class derived : public base
{
public:
    int derived_var;
    void display(void)
    {
        cout << "Value of base_var = " << base_var << endl;
        cout << "Value of derived_var = " << derived_var << endl;
    }
};

int main()
{
    base *base_ptr;
    derived derived_obj1;

    base_ptr = &derived_obj1;  //A base class pointer CAN point to a derived class object...

    (*base_ptr).base_var = 10;
    // base_ptr -> base_var = 10;  //ALSO VALID...
    derived_obj1.derived_var = 20;
    // (*base_ptr).derived_var = 20;  //Throws error as derived_var is not defined in base class...

    (*base_ptr).display();   //Even though it points to a derived obj, it still runs the display function defined in base class...

    /* *************************************************************************************************************************************** */

    derived *derived_ptr;
    derived derived_obj2;
    derived_ptr = &derived_obj2;

    derived_ptr->base_var=20;
    derived_ptr->derived_var=30;
    derived_ptr->display();      
    //Derived pointer can access the inherited as well as personal objects, and uses it's own display function...
    
    system("PAUSE");
    return 0;
}