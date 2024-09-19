#include<iostream>
using namespace std;
static int count = 0;
// int count = 0;  // these two statements are accepted 

class num {
    public:
    //   int count =0; these statement is not accepted
    num(){
       
        count++;
        cout<<"this is the time when my constructor is called for object number"<<count<<endl;
    }
    ~num(){
        
        cout<<"this is the time when my destructor is called for object number "<<count<<endl;
        count--;
    }
};
int main()
{
    cout<<"we are inside our main function"<<endl;
    cout<<"creating first object v1"<<endl;
    num v1;
    {
      cout<<"entering this block"<<endl;
      cout<<"creating two more objects"<<endl;

      num n2 , n3;
      cout<<"existing this block"<<endl;


    }
    cout<<"back to main"<<endl;
    return 0;
}