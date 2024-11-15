#include<iostream>
using namespace std;

template<class T1 = int , class T2 = float , class T3 =char>

class vikash{
    public:
    T1 data1;
    T2 data2;
    T3 data3;
    vikash(T1 A , T2 B , T3 C){
        data1 = A;
        data2 = B;
        data3 = C;
    }
    void display(){
        // cout<<this->data1<<endl<<this->data2<<endl<<this->data3;
        cout<<data1<<" "<<data2<<" "<<data3;
    }
};
int main()
{
    vikash<>obj(65 , 56.78 , '5');
    obj.display();
    return 0;
}