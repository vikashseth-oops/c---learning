#include<iostream>
using namespace std;
class point {
    int x , y;
    public:
     point (int a , int b){
         x = a;
         y = b;
    }
    void displaypoint(void){
        cout<<"the point in the coordinates system is ("<<x<<" , "<<y<<")"<<endl;
    }
};

int main()
{
    point c(2 , 3);
    

    c.displaypoint();
    point d(3 , 7);
    d.displaypoint();




    return 0;
}