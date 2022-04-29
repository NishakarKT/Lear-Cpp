#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string name;
    cout<<"Enter Your Name : ";
    cin>>name;
    ofstream out;
    out.open("TestFile.txt");
    out << name + " is my name...\nI am a Good Boy...\nI like Programming...";
    out.close();

    // string text;
    // ifstream in;
    // in.open("TestFile.txt");
    // getline(in, text);
    // in.close();
    // cout<<text<<endl;

    /* ****** How to tackle space breaks ****** */
    // string str1, str2;
    // ifstream in;
    // in.open("TestFile.txt");
    // in>>str1>>str2;
    // in.close();
    // cout<<str1<<" "<<str2<<endl;

    /* ****** How to tackle space and line breaks (Prints Everything) ****** */
    string str;
    ifstream in;
    in.open("TestFile.txt");
    while (in.eof() == 0)
    {
        getline(in, str);
        cout << str << endl;
    }
    in.close();

    system("PAUSE");
    return 0;
}