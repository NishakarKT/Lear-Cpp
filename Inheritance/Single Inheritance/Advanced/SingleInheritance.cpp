#include <iostream>
using namespace std;

class base
{
    int data1; //Private and they are not inheritable...
public:
    int data2;
    void setdata(void);
    int getdata1(void);
    int getdata2(void);
};

class derived : public base
{
    int data3;

public:
    void process(void);
    void display(void);
};

void base ::setdata(void)
{
    data1 = 10;
    data2 = 20;
}
int base ::getdata1(void)
{
    return data1;
}

int base ::getdata2(void)
{
    return data2;
};

void derived :: process(void)
{
    //data3=data2*data1; //Throws error as you can't inherit the private members...
    data3 = data2 * getdata1(); //You can call a public function that has the access to the private member...
}

void derived ::display(void)
{
    //cout<<"data1 : "<<data1<<endl; //Throws error as you can't inherit the private members...
    cout << "data1 : " << getdata1() << endl;
    cout << "data2 : " << data2 << endl;
    cout << "data3 : " << data3 << endl;
}

int main()
{
    derived d1;

    d1.setdata();
    d1.process();
    d1.display();

    system("PAUSE");
    return 0;
}