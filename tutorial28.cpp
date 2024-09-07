#include<iostream>
using namespace std;
class Y ;
class X {
    int data ;
    friend void sum( X , Y);
    public :
    void setvalue( int value){
        data = value;
    }
};
class Y {
    int num ;
    public :
    friend void sum( X , Y);
    void setvalue( int value){
        num = value ;
    }
};
void sum( X v1 , Y v2){  // here object name is same as in the main function or different
    cout<<"the sum of objects of class X and Y is :"; 
    cout<<v1.data + v2.num ;
}

int main()
{
    X o1 ;
    o1.setvalue(24);
    Y o2 ;
    o2.setvalue(34);  
    sum( o1 , o2 );  // we have to write only function name
    return 0;
}