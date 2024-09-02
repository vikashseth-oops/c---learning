#include<iostream>
using namespace std;

class complex {
    int a;
    int b;
    public:
    void setdata(int v1 , int v2){
        a = v1 ;
        b = v2 ;
    }
    void getdata(complex o1 , complex o2){
        a = o1.a + o2.a;
        b = o2.b + o1.b;
    }
    void printer(void){
        cout<<"the complex number is "<<a<<"+"<<b<<"i"<<endl;
    }
};
int main()
{
    complex a4 , a2 , a3; // a1 is not identified by our compiler
    a4.setdata(2 , 6);
    a4.printer();
    a2.setdata(2 , 3);
    a2.printer();

    a3.getdata(a4 , a2);
    a3.printer();

    a3.getdata(a2 ,a4);
    a3.printer();

    return 0;
}