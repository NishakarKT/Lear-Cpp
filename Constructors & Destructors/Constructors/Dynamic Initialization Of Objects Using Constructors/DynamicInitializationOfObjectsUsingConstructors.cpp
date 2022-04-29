#include<iostream>
using namespace std;

class BankDeposit
{
    int principal;
    int time;
    float rate;
    float returnvalue;
    public:
    BankDeposit(){}  //When BankDeposit b1, b2 are created a constructor has to be assigned and so we need this null constructor.
    BankDeposit(int p, int t, float r)
    {
        principal=p;
        time=t;
        rate=r;
        returnvalue=principal;

        for(int i=0;i<t;i++)
        {
            returnvalue=returnvalue*(1+rate);
        }
    }
    BankDeposit(int p, int t, int r)
    {
        principal=p;
        time=t;
        rate=float(r)/100;
        returnvalue=principal;

        for(int i=0;i<t;i++)
        {
            returnvalue=returnvalue*(1+rate);
        }
    }

    void printretval(void);
};

void BankDeposit :: printretval(void)
{
    cout<<"Final Amount  : "<<returnvalue<<endl;
}

int main()
{
    BankDeposit b1, b2;
    int p, y, R;
    float r;

    cout<<"Enter values of p, y, r : \n";
    cin>>p>>y>>r;
    b1 = BankDeposit(p, y, r);
    b1.printretval();

    cout<<"Enter values of p, y, R : \n";
    cin>>p>>y>>R;
    b1 = BankDeposit(p, y, R);
    b1.printretval();

    system("PAUSE");
    return 0 ;
}