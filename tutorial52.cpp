#include<iostream>
#include<fstream>
using namespace std;
/*
the useful classes for working with files in c++ are :
1. fstream
2. ifstream -->derived from fstreambase
3. ofstream -->derived from fstreambase
*/

// in order work with files in c++ , you will have to open it. there are two ways to open
// open a file:
    //  1. using the constructor 
    //  2. using the member function open() of the class 
int main()
{
    // opening file using constuctor and writing it
    string st = "hello world";
    ofstream ut("sample52b.txt");  // write operation
    ut<<st;

    // opening files using constructor and reading it 
    
    string tre;
    ifstream vik("sample52.txt");  // read operation
    // vik>>tre; // space and newline not come so it prints only this
    getline(vik , tre); // new line not come
    cout<<tre;
    getline(vik , tre);
    
    cout<<tre;
    return 0;
}