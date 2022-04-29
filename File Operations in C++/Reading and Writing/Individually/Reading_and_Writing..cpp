#include<iostream>
using namespace std;
#include<fstream>

/*

The useful classes for working with Files in C++ are :
1. fstreambase class.
2. ifstream class  -->  Derived from fstreambase class.
3. ofstream class  -->  Derived from fstreambase class.

In order to perform file operations in C++ you have to 'OPEN' it first...
Primarily there are 2 ways to open a file :
1. Using Constructors.
2. Using the Member Function open() of the Object Class.
*/

int main()
{
    // string strout=("Hello Mars...");

    // //Opening a File and writing in it...
    
    // ofstream out("TestFile.txt");
    // out<<strout;

    /* ******************************************** */

    string strin;
    //Opening a File and Reading from it...
    ifstream in("TestFile.txt");

    // in>>strin;  //Stops at ' ' and '\n'
    getline(in, strin); //Stops at '\n'

    cout<<strin<<endl;

    return 0;
}
