#include <iostream>
#include <vector>
using namespace std;
template <class E>
void display(vector<E> &v)
{
    cout << "displaying this vector" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
        // cout<<v.at(i)<<" ";// it also print the elements in vector vec1
    }
    cout << endl;
}
int main()
{
    // ways to create a vector
    vector<int> vec1;     // zero length integer  vector
    vector<char> vec2(4); // 4 element character vector
    //  vec2.push_back('6');
    //  display(vec2);
    vector<char> vec3(vec2); // 4 element charactor vector from vec2
    display(vec2);

    vector<int> vec4(6, 68); // 6-element vector of each 68s
    display(vec4);
    cout << vec1.size();

    // int element , size = 5;
    // cout<<"enter the size of vector "<<endl;
    // cin>>size;
    //  for (int i = 0; i < size; i++)
    //  {
    // /* code */
    // cout<<"enter an element to add this  vector"<<endl;
    // cin>>element;
    // vec1.push_back(element);
    //  }
    //  display(vec1);
    // vec1.pop_back(); // it removes the last element of vector vec1
    // display(vec1);
    //  vector<int> :: iterator iter = vec1.begin();
    //  vec1.insert(iter + 3, 5 , 66);// it insert the new elements in the vector vec1
    // here 3 denotes 3 items are inserted in the vector vec1 i.e. (66 66 66)
    // here +3 denotes insert after 3 elements in vector vec1
    //  display(vec1);

    return 0;
}