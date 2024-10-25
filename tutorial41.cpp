#include <iostream>
using namespace std;

/*
case1 :
class B : class A{
order of execution of constructor -> first A() then B()
};

case2:
class A: public B, public C{
     // order of execution of constructor -> B() then C() and A()

};

case3:
class A: public B , virtual public C{
     // order of execution of constructor -> C() then B() and A()
};
*/
class base1
{
    int data1, data2;

public:
    base1(int a, int b)
    {
        data1 = a;
        data2 = b;
        cout << "base1 constructor called" << endl;
    }
    void printdatabase1(void)
    {
        cout << "the value of data1 is " << data1 << endl;
        cout << "the value of data2 is " << data2 << endl;
    }
};
class base2
{
    int data3, data4;

public:
    base2(int a, int b)
    {
        data3 = a;
        data4 = b;
        cout << "base2 constructor called " << endl;
    }
    void printdatabase2(void)
    {
        cout << "the value of data3 is " << data3 << endl;
        cout << "the value of data4 is " << data4 << endl;
    }
};
class derived : public base2, public base1 /*this order decide the order of execution*/
{
    int derived1;

public:
    derived(int a, int b, int c, int d, int e) : base1(b, c), base2(d, e)
    { // this order does not decide the order of execution
        derived1 = a;
        cout << "derived constructor called" << endl;
    }
    void printdataderived(void)
    {
        cout << "the value of derived1 is " << derived1 << endl;
    }
};
int main()
{
    derived obj(5, 8, 9, 89, 34);
    obj.printdatabase1();
    obj.printdatabase2();
    obj.printdataderived();
    return 0;
}