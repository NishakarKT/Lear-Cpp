#include <iostream>
using namespace std;

struct marks
{
    char name[20];
    int roll;
    int marks;
};

int main()
{
    int n;
    struct marks *c, *data;

    cout<<"Enter total Students : ";
    cin>>n;
    data=(marks*)malloc(n*sizeof(marks));
    c=(marks*)malloc(n*sizeof(marks));

    for(int i=0;i<n;i++)
    {
        cout<<"Enter Roll : ";
        cin>>data[i].roll;
        cout<<"Enter Name : ";
        cin>>data[i].name;
        cout<<"Enter Marks : ";       //cin only takes up a string till a space(' ').
        cin>>data[i].marks;
    }

    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(data[i].marks<data[j].marks)
            {
                c[j]=data[i];
                data[i]=data[j];
                data[j]=c[j];
            }
        }
    }

    cout<<"Rank List : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<i+1<<" >>> "<<data[i].name<<" (Roll : "<<data[i].roll<<") (Marks : "<<data[i].marks<<")"<<endl;
    }
    
    system("PAUSE");
    return 0;
}