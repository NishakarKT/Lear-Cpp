#include <iostream>
#include <cstring>
using namespace std;

class employee
{
private:
    int salary;

public:
    char name[20];
    char employeeID[10];
};

int main()
{
    int n;
    char name[20];
    employee *data;

    cout << "TotaL number of entries to be made : ";
    cin >> n;
    getchar();
    data = (employee *)malloc(n * sizeof(employee));

    for (int i = 0; i < n; i++)
    {
        cout << "Name of Employee " << i + 1 << " : ";
        gets(data[i].name);
        cout << "Enter Employee ID of Employee " << i + 1 << " : ";
        gets(data[i].employeeID);
        // cout<<"Enter the Salary of Employee "<<i+1<<" : ";
        // cin>>data[i].salary;   //Shows ERROR as a Private datatype cant be accessed.
    }

    for (int j = 0;; j++)
    {
        cout << "Which Employee do you want the details of ?\n";
        gets(name);

        for (int i = 0; i < n; i++)
        {
            if (strcmp(name, data[i].name) == 0)
            {
                cout << "Name : " << data[i].name << endl;
                cout << "ID : " << data[i].employeeID << endl;
                break;
            }
        }
    }

    system("PAUSE");
    return 0;
}