#include<iostream>
using namespace std;
template <class S1>
void swapp(S1 &X , S1 &Y) {
     S1 Temp = X;
     X = Y;
     Y = Temp;
}
template <class Y>
float average(Y x , Y z){
    return (x+z)/2.0;
}
// float average(int x , int y){
    // float avg = (x+y)/2;
    // return avg;
// }
// float average(int x , float y){
    // return (x+y)/2;
// }
int main()
{
    printf("the average of numbers is %.2f \n" , average(6.6 , 8.0));
    printf("the average of numbers is %.5f \n" , average(6.9 , 8.9));
    int a = 54 , b = 87;
    //   char a = 'g' , b = 'k';
       swapp(a , b);
       cout<<"the value of a and b after swapping is "<<a<<" and "<<b<<endl;
       cout<<a<<endl<<b;

    return 0;
}