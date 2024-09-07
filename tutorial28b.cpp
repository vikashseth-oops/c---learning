#include <iostream>
using namespace std;
class Y;

class X
{
    int val1;
    friend void exchange(X &, Y &);

public:
    void setvalue(int value)
    {
        val1 = value ;

    }
    void display(void){
        cout<<val1<<endl;
    }
};
class Y
{
    int val2;
    friend void exchange(X &, Y &);

public:
    void setvalue(int value)
    {
        val2 = value;
    }
    void display(void){
        cout<<val2<<endl;
    }
};

// trick for swap these two numbers : a , b
//  tmp = a
//  a = b   
//  b = temp

void exchange(X &o1, Y &o2)
{
    int exch = o1.val1;
    o1.val1 = o2.val2;
    o2.val2 = exch;
}
int main()
{
    X o1;
    Y o2;

    o1.setvalue(23);
    o2.setvalue(79);
    exchange (o1 , o2);   // here we can not write void before exchange
    cout<<"the value of var1 after exchange is :";
    
    o1.display();


    cout<<"\nthe value of var2 after exchange is :";
    o2.display();
    

    // v1.setvalue(34);
    // a1.setvalue(77);

    return 0;
}