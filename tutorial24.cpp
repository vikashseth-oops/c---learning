#include <iostream>
using namespace std;

class employee
{
    int ID;
    static int count;

public:
    void setdata(void)
    {
        cout << "enter the ID " << endl;
        cin >> ID;
        count++; // if we not use this line then count take their default value i.e. 0
    }
    void getdata(void)
    {
        cout << "the ID of employee is " << ID << " and the employee no. is " << count << endl;
    }
    static void getcount(void)
    {
        // cout<<ID;    this will show an error because ID is not static data member i.e. static function only takes static variables
        cout << "\n the value of count is " << count << endl;
    }
};
// cout is static data member of class employee
int employee ::count = 1000; // default value is 0 and it can be change from here
int main()
{
    employee vikash, harry, rahul;
    // vikash.ID = 32;
    // vikash.count = 1; these line will show and error because id and count are private member of class so they cant be directly accesed
    vikash.setdata();
    vikash.getdata();
    employee :: getcount();

    harry.setdata();
    harry.getdata();
    employee :: getcount();

    rahul.setdata();
    rahul.getdata();
    employee :: getcount();

    return 0;
}
