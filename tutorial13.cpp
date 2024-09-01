#include<iostream>
using namespace std;

int main()
{
    int marks=45;
    
    int *b = &marks;
    
    cout<<"the address of variable marks is: "<<&marks<<endl;
    cout<<"the address of marks  is :"<<b<<endl;
    cout<<"the address of b is: "<<&b<<endl;
    // derefrence operator
    cout<<"the value at the adress of the variable: "<<*b<<endl;
    // concept of pointer to pointer
    int *c = b;
    cout<<"the address of b is : "<<c<<endl;
    cout<<"the value at address c is :"<<*c<<endl;
    // it gives the value of marks i.e 45
    cout<<"the address of c is "<<&c<<endl;
    cout<<*c<<*b; 
    //  *b and *c gives same value i.e 45
    return 0;
}


