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
void student ::get_roll_number()
{
    cout << "the roll number of student is " << roll_number << endl;
}
class exam : public student
{
protected:
    int maths;
    int physics;

public:
    void set_marks(int m1, int m2);
    void get_marks(void);
};
void exam ::set_marks(int m1, int m2)
{
    maths = m1;
    physics = m2;
}
void exam ::get_marks()
{
    cout << "the math marks of student is " << maths << endl;
    cout << "the physics marks of student is " << physics << endl;
}
class result : public exam
{
    float percentage;

public:
    void set_result()
    {
        percentage = (maths + physics) / 2;
    }
    void get_result()
    {
        set_result();
        get_roll_number();
        get_marks();
        cout << "the percentage of student is " << percentage << endl;
    }
};

int main()
{
    /*notes:
      if we inheriting B from A and C from B : [A--->B--->c]
      1. A is the base class for B and B is the base class for C
      2. A-->B-->C is called inheritance path
    */
    result mahesh;
    mahesh.set_roll_number(2404118);
    mahesh.set_marks(90, 90);
    mahesh.get_result();

    return 0;
}