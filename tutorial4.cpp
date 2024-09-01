#include<iostream>

using namespace std;

int main(){
    // ********************** built in data types******************
    // int a = 24;
    // cout<<"hello world"<<a<<endl;
    // int b = 24,c = 34;
    // cout<<"the value of a is"<<a<<"\nthe value of c is"<<c<<endl;
    // this is our program of datatypes
    // float pi = 3.14;
    // 
    // cout<<"the value of pi is: "<<pi<<endl<<"my brother name is tondu bhai"<<pi; 
    // double bholu = 287.987;
    // cout<<"\nbholu was a two piece: "<<bholu<<endl<<"charming place: "<<a<<endl;
    // char data types are always written in this '' symbol
    // char vikash='w';
    // cout<<vikash;
    // /*.................float,double,long double literals .................*/
    // float x = 43.8f;
    // long double y = 43.8l;
    // cout<<"the value of x is "<<x<<endl<<" the value of y is "<<y<<endl;
    // cout<<"the size of 43.8 is "<<sizeof(43.8)<<endl;
    // generally by default our system knows 43.8 is double
    // cout<<"the size of 43.8f is "<<sizeof(43.8f)<<endl;
    // cout<<"the size of 43.8F is "<<sizeof(43.8F)<<endl;
    // cout<<"the size of 43.8l is "<<sizeof(43.8l)<<endl;
    // cout<<"the size of 43.8L is "<<sizeof(43.8L)<<endl;
     /*..........................refrences datatypes.................*/
     float w = 45.6;
     float & v = w;
     cout<<w<<endl;//both gives same value
     cout<<v<<endl;
     //**************************typecasting variables******************************* */
     int gnu = 34;
     float jnu = 45.89;
     cout<<"the value of gnu{int} is "<<gnu<<endl;
     cout<<"the value of gnu{float} is "<<(float)gnu<<endl;
     cout<<"the value of gnu{float} is "<<float(gnu)<<endl;


     cout<<"the value of jnu{float} is "<<(jnu)<<endl;
     // here float datatypes change into integer value
     cout<<"the value of jnu{int} is "<<int(jnu)<<endl;
     cout<<"the value of jnu{int} is "<<(int)jnu<<endl;
     
    return 0;
}