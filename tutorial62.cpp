#include <iostream>
#include <map>
#include <string>
using namespace std;
// map is an associative array
// void display(map<string , int)

int main()
{
    map<string, int> marksMap;
    marksMap["Harry"] = 23;
    marksMap["vikash"] = 98;
    marksMap["rohan"] = 45;
    marksMap.insert({{"Kozume", 169}, {"Kuroo", 187}}); // syntax for insertion of new elements
    // it automatically iterate in alphabetical order
    map<string, int>::iterator iter;
    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout << (*iter).first << "  " << (*iter).second << endl;
    }
    cout<<"the size of of map is "<<marksMap.size()<<endl; // return no of elements 
    cout<<"the maximum no. of element in a map is "<<marksMap.max_size()<<endl;// return the maximum possible number of elements
    cout<<"chek whether the container is empty "<<marksMap.empty()<<endl;// return 1 if no element and return 0 if have elements

    return 0;
}