#include <iostream>
using namespace std;

class complex
{
    int a, b;
public:
    complex() // default constructors overloadings
    {
        a = 0;
        b = 0;
    }
    //   parameterised constructors overloadings
    complex(int u, int v)
    {
        a = u;
        b = v;
    }
    complex(int c)
    {
        a = c;
        b = 0;
        // b = c;
    }
    void printnumber()
    {
        cout << "the complex number is : " << a << " + i" << b << endl;
    }
};
int main()
{
    complex o1(2, 4);
    // o1.complex(5 , 3); // this is our mistake which we have done in doing this
    o1.printnumber();
    complex o2(4);
    o2.printnumber();
    complex o3;
    o3.printnumber();
    return 0;
}