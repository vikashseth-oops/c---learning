#include<iostream>
#include<list>
using namespace std;

void display(list<int> &lti){
    list<int> :: iterator it;
    for(it = lti.begin(); it != lti.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    
}
int main()
{
    list<int> list1;// list1 of 0 length(elements nhi hai)
    list1.push_back(67);
    list1.push_back(9);
    list1.push_back(65);
    list1.push_back(89);
    list1.push_back(49);
    list1.push_back(7);
    display(list1);
    // removing the elements from the lists
    // list1.pop_back(); //it remove the elements from the last in the list
    // list1.pop_back(); //it remove the elements from the last in the list
    // list1.pop_front();// it remove the elements from the begining in the list 
    // list1.remove(65);// it remove the elements which is written in small bracket 

     // sorting of lists 
    //  list1.sort(); // it arrange in ascending order 

     //reversing of lists
    //  list1.reverse(); // it reverses the order of list

     // here  are using iterator
     // name of iterater is "iter"
    /*list<int> :: iterator iter;
    // here iter points first element of list1
    // here list1.begin is refrence for is1 element of list 
    iter = list1.begin();
    cout<<*iter<<endl;
    iter++;
    cout<<*iter<<endl;
    iter++;
    cout<<*iter<<endl;
    iter++;
    cout<<*iter<<endl;
    iter++;
    cout<<*iter<<endl;
    iter++;
    cout<<*iter<<endl;
    // iter++;
    // cout<<*iter<<endl;  it points and prints first element of list1
    */
    
    display(list1);
     list<int> list2(3);//  empty list of 6 length( element hai but uske andar koi value nhi hai)
     list<int> :: iterator iter;
     iter = list2.begin();
     *iter = 45;
     iter++;
     *iter = 61;
     iter++;
     *iter = 56;
    //  list1.sort();
    //  list2.sort();
     display(list2);

     // merging of lists
     list1.merge(list2);// merging ko samajhna code ko run krakar
     cout<<"after merging list1 and list2 : ";
     display(list1);
    return 0;
}

















