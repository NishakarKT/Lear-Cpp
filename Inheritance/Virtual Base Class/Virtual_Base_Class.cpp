#include <iostream>
using namespace std;

class student
{
    protected:
    int roll;
    public:
    void set_roll(int r)
    {
        roll=r;
    }
    void get_roll(void)
    {
        cout<<"Roll Number : "<<roll<<endl;
    }
};

class tests : virtual public student
{
    protected :
    float maths, physics;
    public:
    void set_maths_marks(float m)
    {
        maths=m;
    }
    void set_physics_marks(float p)
    {
        physics=p;
    }
    void get_marks(void)
    {
        cout<<"Maths Marks : "<<maths;
        cout<<"\tPhysics Marks : "<<physics<<endl;
    }
};

class sports : virtual public student
{
    protected:
    float score;
    public:
    void set_score(float s)
    {
        score=s;
    }
    void get_score(void)
    {
        cout<<"Sports Score = "<<score<<endl;
    }
};

class result : public tests, public sports
{
    public:
    void display_total(void)
    {
        cout<<"Student total : "<<(maths+physics+score)<<endl;
    }

    void check(void)
    {
        cout<<"Total Marks : "<<150<<endl;
        cout<<"Student Percentage : "<<((maths+physics+score)/1.5)<<endl;
        cout<<"Passing Percentage : 33 %"<<endl;
        if(((maths+physics+score)/1.5) >= 33)
        {
            cout<<"Result : PASSED !!!"<<endl;
        }
        else
        {
            cout<<"Result : FAILED !!!"<<endl;
        }
    }
    void display(void)
    {
        get_roll();
        get_marks();
        get_score();
        display_total();
        check();
    }
};

int main()
{
    result shubham;

    shubham.set_roll(12);
    shubham.set_maths_marks(23);
    shubham.set_physics_marks(25);
    shubham.set_score(17);
    shubham.display();

    return 0;
}