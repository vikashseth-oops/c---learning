#include <iostream>
using namespace std;
class A
{
    int a;

public:
    A & setData(int a){
        this->a = a;
        return *this;
    }
    // void setData(int a)
    // {
        // this->a = a;
    // }
    void getData()
    {
        cout << "the value of a is " << a << endl;
    }
};
int main()
{
    A ship;

    ship.setData(5).getData();
    // ship.setData(5);
    // ship.getData();
    return 0;
}