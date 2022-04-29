#include<iostream>
using namespace std;

template<class T1, class T2>
class myclass
{
    public:
    T1 data1;
    T2 data2;
    myclass(T1 a, T2 b)
    {
        data1 = a;
        data2 = b;
    }
    void display(void)
    {
        cout<<"data1 : "<<this->data1<<"\tdata2 : "<<this->data2<<endl;
    }
};

int main()
{
    myclass <int, char>m1(10, 'A');
    m1.display();
    return 0 ;  
}