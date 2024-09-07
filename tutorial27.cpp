#include <iostream>
using namespace std;
// class complex;



class complex
{
    int a, b;
    // individually declaring functions as friends 
    // friend int calculator :: sumrealcomplex(complex o1, complex o2);
    // friend int calculator :: sumcompcomplex(complex o1, complex o2);
    friend class calculator ;

    // Aliter: declaring the entire calculator class as friend       

public:
    void set_number(int x, int y)
    {
        a = x; /* not acceptable*/ // x = a ;
        b = y;                     // y = b ;
    }

    void print_number()
    {
        cout << "your complex number is " << a << " + " << b << "i" << endl;
    }
};
class calculator
{
public:
   int sumrealcomplex(complex v1 , complex v2)// we dont have to declare the function before the class complex 
   {
     return  (v1.a + v2.b);
   }
   int sumcompcomplex(complex v1 , complex v2) // we have write function after writing class complex 
   {
    return (v1.b + v2.b);
   }
};
// our big mistake :: i call these function before the class complex
// another method is solving the problem is class complex is in first priority then we can declare 
// the function in class calculator
/*int calculator :: sumrealcomplex(complex v1, complex v2)
{
    return (v1.a + v2.a);
}
int calculator ::sumcompcomplex(complex v1, complex v2)
{
    return (v1.b + v2.b);
}*/






int main()
{
    complex v1, v2;
    v1.set_number(2, 6);
    v1.print_number();
    v2.set_number(4, 5);
    v2.print_number();

    calculator clc;
    int res = clc.sumrealcomplex(v1 , v2);
    int resc = clc.sumcompcomplex(v1 , v2);
    cout << "the sum of real part of complex o1 and o2 is : " << res<<endl;
    cout << "the sum of imaginary part of complex o1 and o2 is : " << resc<<endl;
    return 0;
}