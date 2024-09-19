#include<iostream>
using namespace std;

class bank_deposit 
{
    int principal;
    int years;
    float interest_rate;
    int returnvalue;
    public:
    bank_deposit(){}
    bank_deposit( int p , int y , float r){
       principal = p;
       years = y;
       interest_rate = r;
       returnvalue = principal;
       for (int i = 0; i < y; i++)
       {
        returnvalue = returnvalue * (1 + interest_rate);
       }
       
    }
    bank_deposit(int p , int y , int r);
    void show();
};
bank_deposit :: bank_deposit( int p , int y, int r){
    principal = p;
    years = y;
    interest_rate = float(r)/100 ;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
       returnvalue = returnvalue * (1 + interest_rate); 
    }
    
}
void bank_deposit :: show(){
    cout<<"the amount deposited is "<<principal
        <<". and after "<<years<<" years it becomes "<<returnvalue<<endl;
}
int main()
{
    bank_deposit bd1 , bd2 ,bd3 ;
    int p , y , R;
    float r;
    cout<<"enter the value of p , y , r "<<endl;
    cin>>p>>y>>r;
    bd1 = bank_deposit(p , y , r);
    bd1.show();
    cout<<"enter the value of p , y , R "<<endl;
    cin>>p>>y>>R;
    bd2 = bank_deposit(p , y , R);
    bd2.show();
    bd3.show();
    return 0;
}
