#include<iostream>
using namespace std;

class complex{
    int real , imaginary;
    public:
    void getdata(){
        cout<<"the real part of complex number is "<<real<<endl;
        cout<<"the imaginary part of complex number is "<<imaginary<<endl;
    }
    void setdata(int a , int b){
        real = a;
        imaginary = b;
    }
};
int main()
{
    complex clm;
    // clm.setdata(7 , 6);
    // clm.getdata();
    complex *ptr = &clm;
    (*ptr).setdata(4 , 8);
    (*ptr).getdata();

    complex *ptr1 = new complex[3];
    (*ptr1).setdata(56 , 89);
    (*ptr1).getdata();
    ptr1->setdata(5 , 6);
    ptr1->getdata();
    ptr1++;
     ptr1->setdata(45 , 69);
     ptr1->getdata();
     ptr1++;
 ptr1->setdata(467 , 669);
 ptr1->getdata();
 ptr1++;
 ptr1->setdata(4 , 9);
 ptr1->getdata();
 ptr1++;
 ptr1->setdata(56 , 9);
 ptr1->getdata();
    

    return 0;
}