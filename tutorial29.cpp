#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    // creating a constructor 
    // constructor is a special member function with the same name as of the class 
    //    it is used to initialise the objects of its classes 
    // it is automatically invoked whenever an object is created 
    complex(void); // constructor declaration 
    void printnumber()
    {
        cout << "the complex number is : " << a << " + i" << b << endl;
    }
} c, g, d;

complex ::complex(void)
{
    a = 23;
    b = 5;
    // cout<<"hello world"<<endl;
}

int main()
{
    c.printnumber();
    g.printnumber();
    d.printnumber();
    return 0;
}

/* characteristics of constructors

1. it should be declared in the public section of the class
2. they are automatically invoked(call) whenever the object is created
3. they cannot return values and do not have return types
4. it can have default arguments
5. we cannot refer to their address
*/