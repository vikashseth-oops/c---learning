#include<iostream>
using namespace std;
int main()
{
    int a = 5;
    int* ptr = &a;
    (*ptr)++;

    cout<<"the value of a is "<<*ptr<<endl;

    // int *p = new int(65);
    float *p = new float(65.68);

    cout<<"the value at address p is "<<*p<<endl;
    int *arr = new int[4];
    arr[0] = 12;
    arr[1] = 10;
    arr[2] = 56;
    arr[3] = 23;
    // delete arr;
    cout<<"the value of arr[0] is "<<arr[0]<<endl;
    cout<<"the value of arr[1] is "<<arr[1]<<endl;
    cout<<"the value of arr[2] is "<<arr[2]<<endl;
    cout<<"the value of arr[3] is "<<arr[3]<<endl;


    return 0;
}