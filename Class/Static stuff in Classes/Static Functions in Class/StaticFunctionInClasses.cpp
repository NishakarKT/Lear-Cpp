#include <iostream>
using namespace std;

class apple
{
public:
    static int count; //By default initialized to 0.

    void incr(void)
    {
        count++;
    }

    void decr(void)
    {
        count--;
    }

    static void display(void) //Static Function.//They can 'ONLY' access the static variables.
    {
        cout << "Apples left : " << count << endl;
    }
};

int apple ::count;

int main()
{
    apple counting;
    int c;

    for (int i = 0;; i++)
    {

    choose:

        cout << "Choose..." << endl
             << "1 = Add an Apple\n2 = Remove an Apple\n3 = Stop\n";
        cin >> c;

        switch (c)
        {
        case 1:
            counting.incr();
            apple :: display();   //You can access a void function even without having to create an object.
            break;

        case 2:
            counting.decr();
            apple :: display();   //You can access a void function even without having to create an object.
            break;

        case 3:
            cout << "Final : ";
            apple :: display();   //You can access a void function even without having to create an object.
            system("PAUSE");
            exit(0);
            break;

        default:
            cout << "Invalid Input...\n";
            goto choose;
            break;
        }
    }

    return 0;
}