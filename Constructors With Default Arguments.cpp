#include<iostream>
using namespace std;
class complex{
    int x,y,z;
    public:
    complex(int a=4,int b=6,int c=8){
        x=a;
        y=b;
        z=c;
    }
    void print(){
        cout<<"The data are "<<x<<","<<y<<"and"<<z;
    }

};
int main(){
    complex c1;
    c1.print();
    cout<<endl;

    complex c2(5,2);
    c2.print();
    cout<<endl;

    complex c3(7);
    c3.print();
    
return 0;
}
