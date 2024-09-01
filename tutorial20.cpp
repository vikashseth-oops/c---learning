#include<iostream>
using namespace std;
int sum(double a , int b , int c){
    cout<<"\n using the function with three arguments "<<endl;
    return a+b+c;
}
int sum(float a , int b){
    cout<<"using the function with two arguments ";
    return a+b;
}
float volume( int r , int h){
    return (3.14*r*r*h);
}
float volume(float a){
    cout<<"the volume of cuboid with side length "<<a<<" is ";
    return (a*a*a);
}
int volume(int l , int b , int h){
    cout<<"the volume of cuboid with length "<<l<<" breadth "<<b<<" height "<<h<<" is ";
    return l*b*h;
}
int main()
{
    // these automatically take their right function
    cout<<"the sum of 5 and 5 is "<<sum(5 , 5)<<endl;
    cout<<"the sum of 4 ,1 and 5 is "<<sum(4 , 5 ,1)<<endl;
    // cout<<"the volume of cylinder with radius 2 and height 1 is "<<volume(2 , 1)<<endl;
    // cout<<"the volume of cuboid with length 4 breadth 5 and height 7 is "<<volume(4 , 5 , 7)<<endl;
    // cout<<"the volume of cube with side 0.4 is "<<volume(0.4)<<endl;
    cout<<volume(2 , 5 , 1)<<endl;
    cout<<volume(0.2);
    return 0;
}