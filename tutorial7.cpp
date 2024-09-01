#include<iostream>
using namespace std;

int main()
{
    int age;
    cout<<"enter your age"<<endl;
    cin>>age;
//  switch case statements
     switch(age)
{
case 15:
    
    cout<<"you are 15";
    break;
case 13:
     cout<<"you are 13";
     break;
     case 20:
     cout<<"you are 20";
     break;
     case 24:
     cout<<"you are 24";
     break;

default:
    cout<<"no more cases";
    break;
}   
    return 0;
}
