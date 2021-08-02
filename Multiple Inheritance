#include <iostream>
using namespace std;
class student
{
protected:
    int roll_number;

public:
    void set_rollno(int r)
    {
        roll_number = r;
    }
    void get_rollno()
    {
        cout << "Roll number is " << roll_number << endl;
    }
};
class exam : public student
{
protected:
    float maths, physics;

public:
    void setmarks(float m, float p)
    {
        maths = m;
        physics = p;
    }
    void getmarks()
    {
        cout << "The marks of maths is " << maths << endl;
        cout << "The marks of physics is " << physics << endl;
    }
};
class result : public exam
{
private:
    float percentage;

public:
    void rest()
    {
        cout << "The Roll no is " << roll_number << endl;
        getmarks();
        cout << "percentage is " << (maths + physics) / 2;
    }
};
int main()
{
    result res;
    res.set_rollno(120);
    res.setmarks(97.0, 98.0);
    res.rest();

    return 0;
}
