#include<iostream>
using namespace std;

// base class 
class employees
{
   
    
    public:
     int ID; 
    int salary;
    employees(){}
    employees(int intid){
        ID = intid;
        salary = 340;
    }
    void display()
    {
        cout<<"the id of the employees is : "<<ID<<endl;
    }
};

// derived class syntax 
/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
   class members/methods/etc....
}
note:
1, default visibility mode is private 
2. public visibility mode: public members of the base class becomes public members of the derived class
3. private visibility mode: public members of the base class becomes private member of the derived class 
4. private members of base class are never be inherited
 */
// creating a programmer class derived from employee base class 
class programmers : employees
{
    public :
    int languagecode = 8;
    programmers(int intid){
        ID = intid;
    }
    void getdata(){
        cout<<ID<<endl;
    }
};


int main()
{
    employees vikash(10), harry(12);
    vikash.display();
    harry.display();

    cout<<vikash.salary<<endl;
    cout<<harry.salary<<endl;
     programmers clc(56);
     cout<<clc.languagecode<<endl;
     clc.getdata();

    return 0;
}