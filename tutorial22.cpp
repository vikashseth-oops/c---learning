// OOPS  - classes and objects
// c++  --->initially called --> c with classes by stroustoup
// class ---> extension of str (in C)
//  structures and limitations
//        - members are public
//        - no methods
//  classes --> strutures + more
//  classes --> can have methods and properties
//  classes --> can make few members as private & few as public
//  structures in c++ are typedefed
//  you can declare objects along with the class declaration like this :
/* class employee{
    // class definition
} vikash , harry , anand ;*/
// vikash.salary = 8 makes no sense if salary is private

// nesting of member function

#include <iostream>
#include <string>
using namespace std;
class binary
{
    // private: by default class members are private
    string s;
    void chk_binry(void);

public:
    void read(void);
    // void chk_binry(void);
    void ones_compliment(void);
    void display(void);
};
void binary ::read(void)
{
    cout << "enter the binary number " << endl;
    cin >> s;
}
void binary ::chk_binry(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '1' && s.at(i) != '0')
        {
            cout << " this no. is not binary number \n incorrect binary number " << endl;
            exit(0);
        }
    }
}
void binary ::ones_compliment()
{
    chk_binry(); // nesting of function
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void binary ::display()
{
    cout << " display the binary number " << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{
    // OOPS  - classes and objects

    binary b;
    b.read();
    // b.chk_binry();    //this function be private so you cannot directly accessed
    b.display();
    b.ones_compliment();
    b.display();
    return 0;
}