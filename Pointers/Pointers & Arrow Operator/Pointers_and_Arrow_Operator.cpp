#include <iostream>
using namespace std;

class complex
{
    int real, imaginary;

public:
    // complex(){}
    // complex(int r, int i)
    // {
    //     real=r;
    //     imaginary=i;
    // }

    void setdata(int r, int i)
    {
        real = r;
        imaginary = i;
    }
    void getdata(void)
    {
        cout << "Real Part : " << real;
        cout << "\tImaginary Part : " << imaginary << endl;
    }
};

int main()
{
    // complex c1(1,2);
    // complex *ptr = &c1;
    // (*ptr).getdata();

    // complex *ptr = new complex(1, 2);
    // (*ptr).getdata();

    // complex *ptr = new complex;
    // ptr->setdata(1, 2);  // '->' means to dereference and point
    // // // (*ptr).setdata(1, 2);
    // (*ptr).getdata();

    complex *ptr = new complex[10];
    for (int i = 0; i < 10; i++)
    {
        (ptr+i)->setdata(i+1, 2*(i+1));
    }
    for(int i=0;i<10;i++)
    {
        (ptr+i)->getdata();
    }

    return 0;
}