#include<iostream>
#include<fstream>
using namespace std;

class temp{
    string username,email,password;
    fstream file;
    public:
    void login();
    void signup();
    void forget();
}obj;

int main(){
    char choice;
    cout<<"\n1- login";
    cout<<"\n2- sign-up";
    cout<<"\n3- forgot password";
    cout<<"\n4- exit";
    cout<<"\nenter your choice :: ";
    cin>>choice;

    switch (choice)
    {
    case '1':
        
        break;
    case '2':

        break;
    case '3':

        break;
    case '4':

        break;    
    default:
        cout<<"tnvalid selection .....";
        break;
    }
}
void temp :: signup(){
    cout<<"\nenter your user name :: ";
    getline(cin,username);
    cout<<"enter your email addresss :: ";
    getline(cin,email);
    cout<<"enter your password :: ";
    getline(cin,password);

    file.open("login.txt",ios :: out | ios :: app);
    file<<username<<"*"<<email<<"*"<<password<<endl;
    file.close();
}
void temp :: login(){
    string searchname,searchpass;
    cout<<"-------------login--------------"<<endl;
    cout<<"enter your user name :: "<<endl;
    getline(cin,searchname);
    cout<<"enter your password :: "<<endl;
    getline(cin,searchpass);

    file.open("logindata.txt",ios :: in);
    getline(file,username,'*');
    getline(file,email,'*');
    getline(file,password,'\n');
    while(!file.eof()){
        if(username == searchname){
            if(password == searchpass){
                cout<<"\naccount login succesful....!";
                cout<<"\nusername :: "<<username<<endl;
                cout<<"\nemail :: "<<email<<endl;

            }else{}
        }
    }




}