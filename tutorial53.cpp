#include<iostream>
#include<fstream>
using namespace std;

int main()
{   
    // conecting our file with hik stream 
    ofstream hik("sample52b.txt");
    //creating a name string and filling it with the string entered by the user
    cout<<"enter the name : "<<endl;
    string name;
    cin>>name;
    // writing a string to the file 
    hik<<name + " is my name ";
    hik.close();

    ifstream hout("sample52b.txt");
    string content;
    // reading a string from file
    // hout>>content;
    getline(hout , content); // it does not work for ofstream class
    cout<<"the content of the file sample52b.txt is "<<content<<endl;
    hout.close();


    return 0;
}