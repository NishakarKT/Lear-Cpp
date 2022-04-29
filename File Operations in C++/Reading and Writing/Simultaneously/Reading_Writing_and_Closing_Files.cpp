#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    /* ******* Writing ********* */

    ofstream nout("TestFile.txt");
    string str;
    cout << "Enter Your Name : ";
    cin >> str;

    nout << "My name is " + str;          //OR nout <<  str + " si my name...";
    nout.close();                        //Closing a File...


    /* ******* Reading ********* */

    ifstream nin("TestFile.txt");
    string in;
    getline(nin, in);
    cout<<in<<endl;
    nin.close();         //Closing a File...

    return 0;
}