#include <iostream>
using namespace std;
template <class T>
class vector
{
public:
    T *arr;
    int size;
    vector(int m)
    {
        m = size;
        arr = new T[size];
    }
    T Dotvector(vector & v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};
int main()
{
    vector <int>v1(3);
    v1.arr[0] = 3;
    v1.arr[1] = 4;
    v1.arr[2] = 1;

    vector <int>v2(3);
    v2.arr[0] = 2;
    v2.arr[1] = 0;
    v2.arr[2] = 3;
    int a = v1.Dotvector(v2);
    cout << a <<endl;
    return 1;
}