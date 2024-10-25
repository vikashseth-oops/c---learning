#include<iostream>
using namespace std;
class baseclass{
    public:
    int var_base;
    void display(){
        cout<<"displaying value of var1 of baseclass is "<<var_base<<endl;
    }
};


class derivedclass : public baseclass{
    public:
    int var_derived;
    void display(){
        cout<<"displaying value of var_base of base class is "<<var_base<<endl;
        cout<<"displaying value of var_derived of derived class is "<<var_derived<<endl;

    }
};
int main()
{
    baseclass *base_class_pointer;
    baseclass base_class_obj;
    derivedclass Derived_class_obj;


    base_class_pointer = &Derived_class_obj;    // pointer of base class  to derived class

    base_class_pointer->var_base = 234;
    // base_class_pointer->var_derived = 56;  // this will show an error
    base_class_pointer->display();

    base_class_pointer->var_base = 45;
    base_class_pointer->display();

    derivedclass *derived_class_pointer;
    derived_class_pointer = &Derived_class_obj;
    (*derived_class_pointer).var_base = 456;
    derived_class_pointer->var_derived = 45;
    derived_class_pointer->display();
    Derived_class_obj.display();
    return 0;
}