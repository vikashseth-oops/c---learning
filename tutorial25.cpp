#include <iostream>
using namespace std;

class employee
{
    int id;
    int salary;

public:
    void setdata(void)
    {
        // salary = 1000000;
        cout << "enter the id of employee " << endl;
        cin >> id;
        cout << " enter the salary a empoyee " << endl;
        cin >> salary;
    }
    void getdata(void)
    {
        cout << "the id of the employee is " << id << endl;
        cout << "the salary of employee is " << salary << endl;
    }
};
int main()
{
    // employee vikash , nisha , rahul , lavraj ;
    // vikash.setdata();
    // vikash.getdata();
    // we can not use this method for thousand of employees in any company so
    // so we use array
    employee amazon[5];
    for (int i = 0; i < 5; i++)
    {
        amazon[i].setdata();
        amazon[i].getdata();
    }

    return 0;
}