#include <iostream>
#include <cstring>
using namespace std;

//Rules of virtual Functions...
// 1)They can't be static.
// 2)They are accessed by object pointers.
// 3)Virtual functions can be a friend of another class.
// 4)A virtual function in base class may/may not be used.
// 5)If a virtual function is defined in a base class, there is no necessity in defining it in the derived class. It will use the base class' virtual function.

class CWH
{
protected:
    string title;
    float rating;

public:
    CWH() {}
    CWH(string str, float r)
    {
        title = str;
        rating = r;
    }
    virtual void display() {} //If we dont use virtual, empty display() function of CWH will execute and display nothing...
};

class CWHvideo : public CWH
{
    float vidlen;

public:
    CWHvideo() {}
    CWHvideo(string str, float r, float vl) : CWH(str, r)
    {
        vidlen = vl;
    }
    void display()
    {
        cout << "Title : " << title << "\tRating : " << rating << "\t";
        cout << "Video Length : " << vidlen << endl;
    }
};

class CWHtext : public CWH
{
    int wordcount;

public:
    CWHtext() {}
    CWHtext(string str, float r, int wc) : CWH(str, r)
    {
        wordcount = wc;
    }
    void display()
    {
        cout << "Title : " << title << "\tRating : " << rating << "\t";
        cout << "WordCount : " << wordcount << endl;
    }
};

int main()
{
    string title;
    float rating, videolength;
    int wordcount;

    //Video
    cout << "Enter Video Title : ";
    cin >> title;
    cout << "Enter Rating : ";
    cin >> rating;
    cout << "Enter Video Length : ";
    cin >> videolength;

    CWHvideo CWHvideo_object(title, rating, videolength);
    // CWHvideo_object.display();

    //Text
    CWHtext CWHtext_object;

    CWH *ptr[2];
    ptr[0] = &CWHvideo_object;
    ptr[1] = &CWHtext_object;

    ptr[0]->display();

    return 0;
}