#include<iostream>
using namespace std;
// in this program we use the copy constructor

class number 
{
    int v;
    public :
    // number(){}
    number(int a = 0)
    {
        v = a;
    }

    // when no copy constructor is found  then compiler supplies its own copy constructors
     number(number &obj)
    {
        cout<<"copy constructor called !!!"<<endl;
         v = obj.v;
    }
    void display()
    {
        cout<<"the value of data is : "<<v<<endl;
    }

};
int main()
{
    number s(10) , d , e(56);
    s.display();
    d.display();
    e.display();
    number b(s) , d1;
    b.display();
    // b should exactly resemble (s) we can also resemble with any other objects also 
    number g(e);  // copy constructor invoked
    g.display();
    

    d1 = d;  // this line will does not show error so we can define objects and equate them
    // here copy constructor is not invoked 
    d1.display();

    number s1 = s;  // but here copy constructor is invoked 

    return 0;
}