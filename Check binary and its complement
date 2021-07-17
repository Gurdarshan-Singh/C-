//check binary or not and then calculate the one's complement
#include<iostream>
#include<string>
using namespace std;
class binary{
    string s;
    public:
    void read();
    void check();
    void onec();
    void display();
};
void binary :: read(){
    cout<<"Enter the binary number ";
    cin>>s;
}
void binary :: check(){
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)=='0' || s.at(i)=='1'){
            
        }
        else{
            cout<<"Not binary";
            exit(0);
        }
    }
    
}
void binary :: onec(){
     check();//nesting of member fn
     for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)=='0'){
            s.at(i)='1';
        }
        else{
            s.at(i)='0';
        }
    }
}
void binary :: display(){
    cout<<s;
}

int main(){
    binary b;
    b.read();
    b.display();
    cout<<"\nOnes complement is ";
    b.onec();
    b.display();

return 0;
}
