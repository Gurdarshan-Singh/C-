#include<iostream>
using namespace std;
class Number{
    int a;
    public:
    Number(){
        a=0;
    }
    Number(int n){
        a=n;

    }
    // When no copy constructor is found, compiler supplies its own copy constructor
    Number(Number &obj){
        cout<<"Copy constructor called !! "<<endl;
        a=obj.a;
    }
    void show(){
        cout<<"The number is "<<a;
    }
};

int main(){
    Number x,y,z(45),z2;
    x.show();
    cout<<endl;
    y.show();
    cout<<endl;
    z.show();
    cout<<endl;
    
    Number z1(z);//Copy constructor invoked
    z1.show();
    cout<<endl;

    z2=z; //Copy constructor not invoked

    Number z3=z;  //Copy constructor invoked
    z3.show();



return 0;
}
