#include <iostream>
using namespace std;
template <class T>
// class vikash
// {
// T data;
//
// public:
// vikash(T a)
// {
// data = a;
// }
// void display();
// };
// template <class Y>
// void vikash<T>::display()
// {
// cout << data << endl;
// }
void func(int c)
{

    cout << "the value of func()1 is " << c << endl;
}
template <class X>
void func(X v)
{
    cout << "the value of templatised func()1 is " << v << endl;
}
template <class T>
void func2(T v)
{
    cout << "the value of templatised func2()1 is " << v << endl;
}
int main()
{
    // vikash<float> vk(45.69);
    // cout<<vk.data<<endl;
    // vk.display();
    int a = 56;
    func(56.90); // priority given on exact function than templatised function
    func('W');
    func2(a); // it will pass through templatised function because function name is changed

    return 0;
}