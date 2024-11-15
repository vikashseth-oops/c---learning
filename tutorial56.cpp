#include<iostream>
using namespace std;
// class template with multiple parameters 
template<class T1 , class T2>
class myClass{
    public:
    T1 data1;
    T2 data2;
    myClass(){
        data1 = 34;
        data2 = 'g';
    }
    void display(){
        cout<<this->data1<<endl<<this->data2<<endl;
    }
};
int main()
{
    myClass <int , char>obj;
    obj.display();

    return 0;
}