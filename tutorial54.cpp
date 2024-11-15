#include<iostream>
#include<fstream>


using namespace std;
int main()
{
    // opening of file using open function open()
    ofstream vik;
    vik.open("sample52.txt"); // jo pahle se rahega use hata dega
    string b = "vikash seth";
    vik<<b<<endl;
    vik<<b<<endl<<b<<endl<<b;
    vik.close();

    ifstream hen;
    hen.open("sample52b.txt");
    string content;
    // hen>>content;
    // cout<<content;
    // hen>>content;
    // cout<<content;
    while (hen.eof() == 0){
        // hen>>content;
        getline(hen , content);
        cout<<content<<endl;
    }
    hen.close();
    

    return 0;
}