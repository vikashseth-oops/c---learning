#include<iostream>
using namespace std;


class test{
    // int a ;
    int b ;
    int a ;
    public:
    // test(int x , int y) : a(x) ,b(y){
    // test(int x , int y) : a(x) ,b(y + 3){
    // test(int x , int y) : a(x) ,b(a + y){
    test(int x , int y) : a(x) ,b( 6 * y){
    // test(int x , int y) : b(x) ,a(b + y){   // this will give garbage value of a because a is initialised first so we have to initialised
    // first a 
        cout<<"initialisised constructor "<<endl;
        cout<<"the value of a is "<<a<<endl;
        cout<<"the value of b is "<<b<<endl;
    }
};
int main()
{
   test obj( 5 , 7); 
    return 0;
}