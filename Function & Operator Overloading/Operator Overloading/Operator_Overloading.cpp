#include <iostream>
using namespace std;

class complex
{
    int real, imaginary;

public:
    void setdata(int real, int imaginary)
    {
        this->real = real;
        this->imaginary = imaginary;
    }
    void getdata(void)
    {
        cout << "Real : " << real << "\tImaginary : " << imaginary << endl;
    }

    // complex add(complex c)
    // {
    //     complex temp;
    //     temp.real = real + c.real;
    //     temp.imaginary = imaginary + c.imaginary;
    //     return temp;
    // }

    complex operator+(complex c)  //we can only use the operators which are defined in c like '+'...
    {
        complex temp;
        temp.real = real + c.real;
        temp.imaginary = imaginary + c.imaginary;
        return temp;
    }
};

int main()
{
    complex c1, c2, c3;

    c1.setdata(2, 3);
    c2.setdata(3, 2);

    // c3 = c1 + c2;     //throws an error

    // c3=c1.add(c2);   //Doesnt throw an error...Now what if we could replace 'add' by '+'...
    // c3.getdata();

    // c3 = c1.operator+(c2); //we can write '.operator+' or we can simply write '+'...
    // c3.getdata();

    c3 = c1 + c2;
    c3.getdata();

    return 0;
}