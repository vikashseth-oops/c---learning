#include<iostream>
using namespace std;
//date 21 august 2024
// int sum(int a, int b){
    // int c=a*b;
    // return c;
// }
/*function prototypes*/
int sum(int , int);//.........acceptable...........
// int sum(int a,b);.........not acceptable........
// int sum(int a,int b);.......acceptable.........
// void g();*****.......acceptable.............
void g(void);//acceptable
int main()
{
    g();
    int num1,num2;
    cout<<"\nenter the num1 "<<endl;
    cin>>num1;
    cout<<"enter the num2 "<<endl;
    cin>>num2;
    // num1 and num2 are actual parameters
    cout<<"the product of "<<num1<<" and "<<num2<<" is "<<sum(num1,num2)<<endl;  
    g(); 
    return 0;
}
int sum(int a ,int b ){
    // a and b are formal parameters which takes value fram num1 and num2
    int c=a*b;
    return c;
}
void g(){
    cout<<"\nhello congratulation to meet you";

}
// today task completed