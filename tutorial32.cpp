#include<iostream>
using namespace std;
class simple
{
    int data1 ;
    int data2 ;
    int data3 ;
    public:
    simple( int x = 0 , int y = 23 , int z = 45)   // constructor with default arguments
    {
        data1 = x;
        data2 = y;
        data3 = z;
    }
    void print_number();
};
void simple :: print_number()
{
    cout<<"the value of data1 , data2 and data3 are "<<data1<<" , "<<data2<<" and "<<data3<<endl;
}


int main()
{
    simple c;
    c.print_number();
    simple d(23 , 90 , 80);
    d.print_number();
    return 0;
}