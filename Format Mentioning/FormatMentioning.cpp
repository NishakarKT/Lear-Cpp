#include<iostream>
using namespace std;

int main()
{
    cout<<"Size of 34.4f is "<<sizeof(34.4f)<<endl;  //float
    cout<<"Size of 34.4F is "<<sizeof(34.4F)<<endl;
    cout<<"Size of 34.4l is "<<sizeof(34.4l)<<endl;  //long double
    cout<<"Size of 34.4L is "<<sizeof(34.4L)<<endl;
    cout<<"Size of 34.4 (default) is "<<sizeof(34.4)<<endl;  //double by default

    system("PAUSE");
    return 0 ;
}