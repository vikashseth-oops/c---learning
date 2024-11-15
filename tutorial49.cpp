#include<iostream>
using namespace std;

class baseclass{
    public:
    int var_base =45;
     void display(){
        cout<<"1. displaying value of var1 of baseclass is "<<var_base<<endl;
    }
};


class derivedclass : public baseclass{
    public:
    int var_derived = 23;
   virtual void display(){
        cout<<"1. displaying value of var_base of base class is "<<var_base<<endl;
        cout<<"2. displaying value of var_derived of derived class is "<<var_derived<<endl;

    }
};
int main()
{
    baseclass *base_class_pointer;
    baseclass baseclass_obj;
    derivedclass derivedclass_obj;
    base_class_pointer = &derivedclass_obj;
    // base_class_pointer->display();

    derivedclass *derived_class_pointer;
    derived_class_pointer = &derivedclass_obj;
    base_class_pointer->display();
    return 0;
}