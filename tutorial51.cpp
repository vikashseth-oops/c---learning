#include<iostream>
#include<cstring>
using namespace std;

class CWH{
    protected:
    string title;
    float rating;
    public:
    CWH(string s , float r){
          title = s;
          rating = r;
    }
    virtual void display()= 0 ; //
    // {
        // cout<<"Bogus code"<<endl;
    // }


};
class CWHVideo : public CWH{
    private:
    float videolength;
    public:
    CWHVideo(string s , float r , float vl) : CWH(s , r){
        videolength = vl;

    }
    void display(void){
        cout<<"the name of code with harry tutorial is "<<title<<endl;
        cout<<"the rating of this tutorial is "<<rating<<" star out of 5 "<<endl;
        cout<<"the length of video is "<<videolength<<" minutes "<<endl;
    }
};
class CWHText : public CWH{
    private:
    float words;
    public:
    CWHText(string s , float r , float w) : CWH(s , r){
        words = w;

    }
    void display(void){
        cout<<"the title of text tutorial of code with harry "<<title<<endl;
        cout<<"the rating of text tutorial of code with harry "<<rating<<" star out of 5"<<endl;
        cout<<"the number of words in text tutorial is "<<words<<" words "<<endl;
    }

      
};
int main()
{
    float words;
    string title;
    float vl1 , r;

    // for code with harry video
    vl1 = 23.4;

    title = "django video tutorial";
    r = 4.98;
    CWHVideo Djvideo(title , r , vl1);
    Djvideo.display();
     
     // for code with harry text tutorial
    title =" django text tutorial ";
    words = 4900;
    r = 4.56 ;
    CWHText Djtext(title ,r , words);
    Djtext.display();
    
    CWH* tuts[2];
    tuts[0] = &Djvideo;
    tuts[1] = &Djtext;


    tuts[0]->display();
    tuts[1]->display();
    return 0;
}






























