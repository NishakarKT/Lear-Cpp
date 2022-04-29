#include <iostream>
#include <vector>
using namespace std;

//You can't resize an array, but you can add as many elements in case of vectors...

template <class T>
void display(vector<T> &v)
{
    for (int i = 0; i < v.size(); i++) //v.size() returns the size of the vector...
    {
        // cout << v[i] << endl; //OR
        cout <<v.at(i)<<endl;
    }
}

int main()
{
    int element;
    //Ways to declare a vector...
    vector<int> vec1;  //Zero Length Integer Vector
    vector<char> vec2(4); /*Character Vector of size 4*/ vec2.push_back('A'); //initialization of vec 2
    vector<char> vec3(vec2); //character vector created from vector vec2 of size 4
    vector <int> vec4(6, 3); //Integer Vector consisting of 6 "3s"

    for (int i = 0; i < 4; i++)
    {
        cout << "Enter Element " << i + 1 << " to add to the vector : ";
        cin >> element;
        vec1.push_back(element);
    }
    //vec1.pop_back(); //Removes last element...
    //vec2.size();//Returns Size of Vec2

    display(vec1);
    cout<<endl;

    //Making an Iterator...
    vector<int>::iterator iter = vec1.begin(); //We created an iterator named 'iter'... // begin() makes the iterator to point to the first element of the vector...

    // vec1.insert(iter, 10); //Inserts 10 in the first of all the elements in the Vector...
    // vec1.insert(iter+2, 10); //Inserts 10 in the third of all the elements in the Vector...
    vec1.insert(iter+2,5, 10); //Inserts 10 from the third to seventh place of the elements in the Vector...
    
    display(vec1);
    return 0;
}

//For more functions, check https://www.cplusplus.com/reference/vector/vector/

