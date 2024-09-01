#include<iostream>
using namespace std;
class employee
{
private:
    int a , b , c;
public:
    int e , d;
    void setdata(int a1 , int b1 , int c1);//only declaration is there
    void getdata(){
        cout<<"the value of a is "<<a<<endl;
        cout<<"the value of b is "<<b<<endl;
        cout<<"the value of c is "<<c<<endl;
        cout<<"the value of d is "<<d<<endl;
        cout<<"the value of e is "<<e<<endl;
        
    }
};

 void employee :: setdata(int a1 , int b1 , int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    employee vikash;
    // vikash.a = 34; this line will throw error because a was not publically accessed i.e. private
    vikash.d = 465;
    vikash.e = 12;
    vikash.setdata(34 , 78 , 23);
    vikash.getdata();
    return 0;
}