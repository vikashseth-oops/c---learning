#include<iostream>
using namespace std;
int main()
{
    int marks[] = {12,56,78,67};
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    int mathmarks[6] ;
    mathmarks[0]=567;
    mathmarks[1]=237;
    mathmarks[2]=767;
    mathmarks[3]=967;
    mathmarks[4]=897;
    mathmarks[5]=87;
    cout<<mathmarks[0]<<endl;
    cout<<mathmarks[1]<<endl;
    cout<<mathmarks[2]<<endl;
    cout<<mathmarks[3]<<endl;
    cout<<mathmarks[4]<<endl;
    cout<<mathmarks[5]<<endl;
    /*interesting fact*/
    // for (int i = 0; i < 11; i++)
    // {
        // cout<<"the value of mathmarks "<<i<<" is :"<<mathmarks[i]<<endl;
    // }
    int i=0;
    // while (i<4)
    /*{
        cout<<marks[i]<<endl;
        i++;
       }
     do
     {
        cout<<mathmarks[i]<<endl;
        i++;
     } while (i<6);*/
    //  * is called derefrence operator
     int *b=mathmarks;
      cout<<"the address of array mathmarks is : "<<b<<endl;
      cout<<"the value at mathmarrks[0] is "<<*b<<endl;
      cout<<"the value at mathmarrks[1] is "<<*(b+1)<<endl;
      cout<<"the value at mathmarrks[2] is "<<*(b+2)<<endl;
      cout<<"the value at mathmarrks[3] is "<<*(b+3)<<endl;
      cout<<"the value at mathmarrks[4] is "<<*(b+4)<<endl;
      cout<<"the value at mathmarrks[5] is "<<*(b+5)<<endl;
      cout<<"the address of mathmarks[4]" <<(b+4)<<"\n"<<(b+2)<<endl;
       cout<<*b++<<endl;
       cout<<*+b<<endl;
       cout<<*++b<<endl;
    //    only comment out lines show error in program for printing mathmarks 5 and 3
    //    cout<<*+++b<<endl;
    // .........most important fact ...........
       cout<<*++++b<<endl;
    //    cout<<*+++++b<<endl;    


    


    return 0;
}