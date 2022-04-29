#include<iostream>
using namespace std;

class complex
{
    int real, imaginary;
    public:
    // Creating a Constructor.
    // Constructor is a special member function with the same name as of the class.
    //It is used to initialize the objects of its class.
    //It is automatically invoked whenever an object is created.
    
    complex(void); //Constructor Declaration.//This function automatically invokes when the objects are declared.//No return type needed for constructor functions.

    void printcomplex(void)
    {
        cout<<real<<" + "<<imaginary<<"i"<<endl;
    }
};

// complex :: complex (void)  //A default constructor as it takes no arguments.
// {
//     real=25;
//     imaginary=25;
// }

complex :: complex(void)
{
    cout<<"Real : ";
    cin>>real;
    cout<<"Imaginary : ";
    cin>>imaginary;
}

/*  Characteristics of Constructors

1. It should be declared in the public section of the class 
2. They are automatically invoked whenever the object is created 
3. They cannot return values and do not have return types
4. It can have default arguments 
5. We cannot refer to their address

*/

int main()
{
    complex z;  //With constructors along with creating objects you may also input some data and you dont have to make a separate function for it.
    z.printcomplex();

    system("PAUSE");
    return 0 ;
}