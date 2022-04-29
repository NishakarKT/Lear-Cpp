#include<iostream>
using namespace std;

class employee  //Base Class...
{
    public:
    int employeeID;
    float salary;
    employee(){}
    employee(int id, int sal=25000)
    {
        employeeID = id;
        salary=sal;
    }
};

// ***************Derived Class Syntax**************

// class {{Derived-Class-Name}} : {{Visibility-Mode}} {{Base-Class-Name}}

// {
//     members, methods etc...
// }

//If we don't mention the visibility mode, default visibility mode is PRIVATE...
// Public Visibility Mode: Public members of the base class becomes Public members of the derived class.
// Private Visibility Mode: Public members of the base class becomes Private members of the derived class.
// Private members are never inherited.
// *************************************************

//Creating a Programmer (Derived class) from the Employee (Base Class).

class programmer : employee
{
    int languageid;
    public:
    programmer(){}
    programmer(int langid)
    {
        languageid=langid;
    }
    void display(void)
    {
        cout<<"Language ID : "<<languageid<<endl;
    }
};

int main()
{
    programmer p1(9);
    p1.display();


    system("PAUSE");
    return 0 ;
}