#include<iostream>
using namespace std;
// when static or recursion are used then inline function is not used 
 int product(int x , int y){
    static int c = 0;// this functoion call only one time
    c = c + 1;// this function will excute again and again
    return x*y+c;
}
float moneyrecieved(int money , float interest_rate =1.04){
    return money*interest_rate;
}

int main()
{
    int a,b;
    cout<<"enter the value of a "<<endl;
    cin>>a;
    cout<<"enter the value of b "<<endl;
    cin>>b;
    cout<<"the product of "<<a<<" and "<<b<<" is "<<product(a , b)<<endl;
    int money = 100000;
    cout<<"if you are a normal person then your money "<<money<<" will be "<<moneyrecieved( money )<<" after 1 year "<<endl;
    cout<<"if you are a very important person then your money "<<money<<" will be "<<moneyrecieved( money , 1.10)<<" after 1 year "<<endl;

    // cout<<"the product of "<<a<<" and "<<b<<" is "<<product(a , b)<<endl;
    // cout<<"the product of "<<a<<" and "<<b<<" is "<<product(a , b)<<endl;
    // cout<<"the product of "<<a<<" and "<<b<<" is "<<product(a , b)<<endl;
    // cout<<"the product of "<<a<<" and "<<b<<" is "<<product(a , b)<<endl;
    // cout<<"the product of "<<a<<" and "<<b<<" is "<<product(a , b)<<endl;
    // cout<<"the product of "<<a<<" and "<<b<<" is "<<product(a , b)<<endl;
    // cout<<"the product of "<<a<<" and "<<b<<" is "<<product(a , b)<<endl;
    // cout<<"the product of "<<a<<" and "<<b<<" is "<<product(a , b)<<endl;
    // cout<<"the product of "<<a<<" and "<<b<<" is "<<product(a , b)<<endl;
    // cout<<"the product of "<<a<<" and "<<b<<" is "<<product(a , b)<<endl;
    // cout<<"the product of "<<a<<" and "<<b<<" is "<<product(a , b)<<endl;
    // cout<<"the product of "<<a<<" and "<<b<<" is "<<product(a , b)<<endl;
    // cout<<"the product of "<<a<<" and "<<b<<" is "<<product(a , b)<<endl;
    // cout<<"the product of "<<a<<" and "<<b<<" is "<<product(a , b)<<endl;
    return 0;
}