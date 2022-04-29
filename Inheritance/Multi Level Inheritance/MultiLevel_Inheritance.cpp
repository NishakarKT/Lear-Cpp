#include <iostream>
using namespace std;

class student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};
void student ::set_roll_number(int r)
{
    roll_number = r;
}
void student ::get_roll_number(void)
{
    cout << "Roll Number : " << roll_number << endl;
}

class exam : public student
{
protected:
    float maths_marks, physics_marks;

public:
    void set_marks(float, float);
    void get_marks(void);
};

void exam ::set_marks(float m, float p)
{
    maths_marks = m;
    physics_marks = p;
}

void exam ::get_marks(void)
{
    cout << "Maths Marks : " << maths_marks << endl;
    cout << "Phsics Marks : " << physics_marks << endl;
}

class result : public exam
{
    float percentage;

public:
    void display(void);
};

void result ::display(void)
{
    get_roll_number();
    get_marks();
    cout << "Final Percentage is : " << (maths_marks + physics_marks) << endl;
}

int main()
{
    result r1;

    r1.set_roll_number(10);
    r1.set_marks(40, 40);
    r1.display();

    return 0;
}