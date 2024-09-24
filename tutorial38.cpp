#include<iostream>
using namespace std;
class base
{
    int b;
    protected:
    // public:
    int a = 12;

};
/*
for a protected member:
                               protected derivation     private derivation    public derivation
        private members        not inherited             not inherited          not inherited
        public members         protected                 private                public
        protected members      protected                 private              protected
*/
class derived : protected base{

};
int main()
{
    base vik;
    derived tk;
    // cout<<tk.a;   // will not work since a is protected in both base as well as base class
    return 0;
}