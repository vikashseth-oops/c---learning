#include<iostream>
using namespace std;
class base1
{
    protected:
    int data1;
    public:
    void set_data1(int n){
        data1 = n;
    }
};
class base2
{
    protected:
    int data2;
    public:
    void set_data2(int r){
        data2 = r;
    }
};
class derived : public base1 , public base2
{
    // protected:
    //  int data3;
    //  data
     public:
     void display_data()
     {
        cout<<"the value of data1 is : "<<data1<<endl;
        cout<<"the value of data2 is : "<<data2<<endl;
        cout<<"the sum of data1 and data2 is : "<<data1 + data2<<endl;
     }
};

int main()
{
    derived vik;
    vik.set_data1(100);
    vik.set_data2(40);
    vik.display_data();
    return 0;
}














