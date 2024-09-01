#include<iostream>

// date 20/08/24
using namespace std;
typedef struct employees
{
    /* data */
    int eid;
    char favchar;
    float salary;
}vik;
union money
{
    /* data */
    int rice;
    float pound;
    char favcar;
};


int main()
{
    vik harry;
        harry.eid = 23;
        harry.favchar = 'v';
        harry.salary = 1450000000;
        // struct employees harry;
        // harry.eid = 23;
        // harry.favchar = 'v';
        // harry.salary = 1450000000;
        /*cout<<"the value is "<<harry.eid<<endl;
        cout<<"the value is "<<harry.favchar<<endl;
        cout<<"the value is "<<harry.salary<<endl;
        union money m1;
        m1.pound=43.89;
        m1.rice=3;
        cout<<m1.rice<<endl;*/
        enum meal { breakfast , lunch , dinner };
        meal m1 = lunch;
        cout<<breakfast<<endl;        
        cout<<(m1==2)<<endl;
        cout<<dinner<<endl;    
        // today task completed
    return 0;
}