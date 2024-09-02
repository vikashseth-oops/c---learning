#include<iostream>
using namespace std;

class complex {
    int a ;
    int b ;
     friend complex sumcomplex(complex o1 , complex o2);
    public :
    void set_number (int x , int y){
        a = x ;   /* not acceptable*/  // x = a ;
        b = y ;                        // y = b ;

    }
    // friend complex sumcomplex(complex o1 , complex o2);  // it can be written in public as well as private
    // below line means that non member - sumcomplex function is allowed to do anything 
    // with my private parts (members)
    void print_number(){
        cout<<"your complex number is "<<a<<" + "<<b<<"i"<<endl;
    }
     
};
complex sumcomplex(complex o1 , complex o2){
     complex o3;
     o3.set_number((o1.a + o2.a) , (o1.b + o2.b));
     return o3;
}
int main()
{
    complex v1 , v2 , sum;
    v1.set_number(3 , 6);
    v1.print_number();


    v2.set_number(1 , 3);
    v2.print_number();

    sum = sumcomplex(v1 , v2);
    sum.print_number();


    
    return 0;
}


/* properties of friend function 
1. not in the scope of the classs 
2. since it is not in the scope of the class , it cannot be called from the object of 
that class. cl.sumcomplex() == invalid 
3. can be invoked without the help of any object 
4. usuallly contains the objects as arguments 
5. can be declared inside public or private section of the class
6. it cannot access the members directly by their names and need object_name.



*/