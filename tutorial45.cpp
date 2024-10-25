#include<iostream>
using namespace std;
class shopItem
{
    int id;
    float price;
    public:
    void setData(int m , float n){
        id = m;
        price = n;
    }
    void getData(void){
        cout<<"the id of item is "<<id<<endl;
        cout<<"the price of item is "<<price<<endl;
    }
};
int main()
{
    int size = 3;
    // int *ptr = &size;
    // int *ptr = new int[10];
    shopItem *ptr = new shopItem [size];
    shopItem *ptrTemp = ptr;
    int i ,x ; 
    float y;
    for(i = 0; i < size+1; i++)
    {
        cout<<"enter the id and price of item :"<<endl;
        cin>>x>>y;
        // (*ptr).setData(x , y);
        ptr->setData(x , y);
        ptr++;

    }
    for ( i = 0; i < size+1; i++)
    {
        /* code */
        ptrTemp->getData();
        ptrTemp++;
    }
    
    

    return 0;
}