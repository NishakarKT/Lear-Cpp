#include <iostream>
using namespace std;

class employee
{
public:
    int id[10];
    int salary[10];
    static int count;  //By default is set to 0. ststic int count =1000;  will throw an error.
    //void counts(void) { count = 0; }
    void getdetails(void);
    void displaydetails(void);
};

int employee :: count;  //syntax for static variables.  int employee :: count=1000; will not throw an error.

void employee ::getdetails(void)
{
    cout << "Enter ID of Employee No. " << count + 1 << " : ";
    cin >> id[count];
    cout << "Enter Salary of Employee No. " << count + 1 << " : ";
    cin >> salary[count];
    count++;
}

void employee ::displaydetails(void)
{
    cout << "Employee " << count + 1 << " >>> "
         << "Employee ID : " << id[count] << " >>> "
         << "Salary : " << salary[count] << endl;
    count++;
}

int main()
{
    int numcomp, *nummem;
    employee *company;

    cout << "How many companies ?\n";
    cin >> numcomp;
    company = (employee *)malloc(numcomp * sizeof(employee));
    nummem = (int *)malloc(numcomp * sizeof(int));

    for (int i = 0; i < numcomp; i++)
    {
        cout << "How many members of Company " << i + 1 << " : ";
        cin >> nummem[i];
        // company[i].counts();
        for (int j = 0; j < nummem[i]; j++)
        {
            company[i].getdetails();
        }
    }

    for (int i = 0; i < numcomp; i++)
    {

        // company[i].counts();
        for (int j = 0; j < nummem[i]; j++)
        {
            company[i].displaydetails();
        }
        cout<<endl;
    }

    system("PAUSE");
    return 0;
}