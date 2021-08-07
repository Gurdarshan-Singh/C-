#include<iostream>
using namespace std;
class base1{
    int data1;
    public:
    base1(int a){
        data1=a;
        cout<<"Base 1 constructor is called "<<endl;
    }
    void print1(){
        cout<<"the value of data 1 is "<<data1<<endl;
    }
};
class base2{
    int data2;
    public:
    base2(int b){
        data2=b;
        cout<<"Base 2 constructor is called"<<endl;
    }
    void print2(){
        cout<<"the value of data 2 is "<<data2<<endl;
    }
};
class Derived:public base1,public base2{
    int datader;
    public:
    Derived(int a ,int b , int c):base1(a),base2(b){
    cout<<"Derived consructor is called"<<endl;
    datader=c;
    cout<<"the value of  derived data  is "<<datader<<endl;
    }
};
int main(){
    Derived sonu(1,2,3);
    sonu.print1();
    sonu.print2();
    
return 0;
}
