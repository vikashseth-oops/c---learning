#include<iostream>
using namespace std;
class base
{
    int data1;
    public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();

};
void base :: setdata(){
    data1 = 12;
    data2 = 20; 
}
int base :: getdata1()
{
    return data1;
}
int base :: getdata2()
{
    return data2;
}
class derived : public base 
{
    int data3;
    public:
    void process();
    void displaydata();
};
void derived :: process()
{
    setdata();
    data3 = data2 * getdata1(); 
}
void derived :: displaydata()
{
    cout<<"the value of data1 is : "<<getdata1()<<endl;
    cout<<"the value of data2 is : "<<data2<<endl;
    cout<<"the value of data3 is : "<<data3<<endl;
}
int main()
{   
    derived derv;
     
    // derv.setdata();    
    derv.process();
    derv.displaydata();
    
    return 0;
}