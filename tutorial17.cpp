#include<iostream>
using namespace std;
/*void swap(int x,int y){// temp  x    y
    int temp = x;      // 4     4    6
    x = y;             // 4     6    6
    y = temp;          // 4     6    4
 }*///these step does not swap these two number
//call by reference by using pointer
  /* void swappointer(int *x,int *y){    
     int temp = *x;         
     *x = *y;             
     *y = temp;  
     //these can swap these two numbers     
   }  */
// call by reference by using c++ refrences variables
int & swapreferencevar(int &x ,int &y){
    int temp = x;
    x = y;
    y = temp;
    return y;
}
int main()
{
    int a=4,b=6;
    cout<<"the value of a is "<<a<<endl<<"and the value of b is "<<b<<endl;
    //  swap(a , b);// these step do not swap these two no.
    //  swappointer(&a , &b);//these  can swap two numbers
    //swapreferencevar(a , b);// these can also swap
    swapreferencevar (a , b) = 34; 
    cout<<"the value of a is "<<a<<endl<<"and the value of b is "<<b;
    return 0;   
}           
