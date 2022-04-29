#include<iostream>
using namespace std;

//Destructors neither take arguments nor return values . . .

int count=0;

class num
{
    public:
    num()//Default Constructor
    {
        count++;
        cout<<"This is the time when my Constructor is called for object number "<<count<<endl;;
    }
    ~num()//Default Destructor
    {
        cout<<"This is the time when my Destructor is called for the object number "<<count<<endl;
        count--;
    }
};

int main()
{
    cout<<"I am inside my main function...\n";
    cout<<"Creating an object n1"<<endl;
    num n1;
    {
        cout<<"Entering this block..."<<endl;
        cout<<"Creating 2 more objects n2 and n3..."<<endl;
        num n2, n3;
        cout<<"Exiting this block...\n";
        //after exiting the block the objects of the block are automatically destroyed and the memory is freed by the Destructor.
    }

    cout<<"Back to main..."<<endl;

    return 0 ;
}