#include<iostream>
using namespace std;

int main()
{
    int marks;
    cout<<"enter your marks"<<endl;
    cin>>marks;
    // switch case statements
    switch (marks)
    {
    case 32:
        cout<<"you are not qualified in the exam";
        break;
    case 35:
    cout<<"you are qualifiebd and your marks is 35";
    break;
    case 89:
    cout<<"your marks is 89 and you are qualified and your all india renk is 1\n congratulations";
    break;
    default:
         cout<<" no more cases and what is your name\?";
        break;
    }
    return 0;
}
