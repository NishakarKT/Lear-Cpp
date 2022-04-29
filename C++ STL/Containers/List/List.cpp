#include <iostream>
#include <list>
using namespace std;

//Lists are used for faster insertion/Deletion in between the series...

void display(list<int> &l)
{
    list<int>::iterator iter = l.begin();

    // for (int i = 0; i < l.size(); i++)
    // {
    //     cout << *iter+i << " ";
    // }

    for (iter = l.begin(); iter != l.end(); iter++)  //just like EOF we have l.end()
    {
        cout<<*iter<<" ";
    }
    cout<<endl;;
}

int main()
{
    list<int> list1;    //Creates a List of zero length...
    //Initialization... List1
    list1.push_back(1);
    list1.push_back(2);
    list1.push_back(3);
    list1.push_back(4);
    list1.push_back(5);
    //Printing... List1

    //Making an Iterator...
    // list<int> :: iterator iter;
    // iter = list1.begin();
    // for(int i=0;i<list1.size();i++)
    // {
    //     cout<<*iter+i<<" ";
    // }

    //Calling a Function
    // display(list1);


    list<int> list2(5); //Creates an empty list of size = 7...
    list<int> :: iterator iter2 = list2.begin();

    // cout<<"Enter Element 1 : ";
    // cin>>*iter2;
    // iter2++;
    // cout<<"Enter Element 2 : ";
    // cin>>*iter2;
    // iter2++;
    // cout<<"Enter Element 3 : ";
    // cin>>*iter2;
    // iter2++;
    // cout<<"Enter Element 4 : ";
    // cin>>*iter2;
    // iter2++;
    // cout<<"Enter Element 5 : ";
    // cin>>*iter2;

    //OR

    for(int i=0;i<5;i++)
    {
        cout<<"Enter Element "<<i+1<<" : ";
        cin>>*iter2;
        iter2++;
    }
    display(list2);

    //Deletion from back
    //list2.pop_back();

    //Deletion from front
    //list2.pop_front();

    //Delete a specific element
    //list2.remove(4);  //All 4s are removed...

    //Sorting The List...
    list2.sort();  //Ascending Order...
    display(list2);

    // //Merging...
    // list2.merge(list1);
    // display(list2);

    //Reversing...
    // list2.reverse();
    // display(list2);

    system("PAUSE");
    return 0;
}