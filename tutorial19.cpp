#include<iostream>
using namespace std;
int factorial(int n){
    if(n<=1){
        return 1;
    }
    return n * factorial(n-1);
}
int fibo(int b){
    if(b < 2){
        return 1;
    }
    return fibo(b-1) + fibo(b-2);
}
// factorial(5) = 5 * factorial(4)
// factorial(5) = 5 * 4 * factorial(3)
// factorial(5) = 5 * 4 * 3 * factorial(2)
// factorial(5) = 5 * 4 * 3 * 2 * factorial(1)
// here factorial(1) = 1 and factorial(0) = 1
int main()
{
    int a;
    cout<<"enter the number "<<endl;
    cin>>a;
    cout<<"the value of factorial "<<a<<" is "<<factorial(a)<<endl;
    cout<<"the value at "<<a<<"th poisition of fibonacci number is "<<fibo(a)<<endl;

    return 0;
}