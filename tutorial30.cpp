#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex(int, int); // constructor declaration
    void printnumber()
    {
        cout << "the complex number is : " << a << " + i" << b << endl;
    }
};
complex ::complex(int x, int y)  // ----> this is a parameterised constructor as
// bacause it takes two parameters 
{
    a = x;
    b = y;
}

int main()
{
    // implicit call
    complex vikash(2, 3);
    vikash.printnumber();
    // explicit  call(invoked)
    complex anand = complex(2, 3);
    anand.printnumber();
    return 0;
}