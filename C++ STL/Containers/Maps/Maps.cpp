#include <iostream>
#include<map>
#include<string>
using namespace std;

//Map is an associative array...

int main()
{
    map<string, int> marks;
    marks["Nishakar Kumar"] = 99;
    marks["Aditya Senapati"] = 89;
    marks["Manish Thakur"] = 79;

    map<string, int> :: iterator iter = marks.begin();

    for(iter = marks.begin(); iter != marks.end();iter++)
    {
        cout<<(*iter).first<<" ---> "<<(*iter).second<<" "<<endl;
    }

    system("PAUSE");
    return 0;
}