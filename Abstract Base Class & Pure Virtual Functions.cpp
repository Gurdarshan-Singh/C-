#include<iostream>
using namespace std;
class Gur{                                //Abstract base class is which contains atleast one pure virtual function //We cannot make objects of Abstract class
    protected:
    string title;
    float rating;
    public:
    Gur(string s,float r){
        title=s;
        rating=r;
    }
    virtual void display()=0;            //Pure Virtual function //We have to make display function in derived classes it is must
};
class video:public Gur{
    float vl;
    public:
    video(string s,float r,float v):Gur(s,r){
        vl=v;
    }
    void display(){                                                         
        cout<<"The Title of the video is "<<title<<endl;        
        cout<<"The Rating of the video is "<<rating<<" Out of 5"<<endl;        
        cout<<"The Length of the video is "<<vl<<" minutes"<<endl;        

    }
};
class text:public Gur{
    int wd;
    public:
    text(string s,float r,int w):Gur(s,r){
        wd=w;
    }
    void display(){
        cout<<"The Title of the video is "<<title<<endl;        
        cout<<"The Rating of the video is "<<rating<<" Out of 5"<<endl;        
        cout<<"The Length of the video is "<<wd<<" words"<<endl;        

    }
};
int main(){
    Gur *ptr[2];
    string str="C++";
    int wor=833;
    float rate=4.9,vido=15.12;
    video vid(str,rate,vido);
    text txt(str,rate,wor);
    vid.display();
    cout<<endl;
    txt.display();
    cout<<endl;
    
    ptr[0]=&vid;
    ptr[1]=&txt;

    ptr[0]->display();
    cout<<endl;
    ptr[1]->display();

    return 0;
}
