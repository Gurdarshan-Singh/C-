#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    complex(void){    //no return type // default constructor
        a=10;
        b=20;
    }
    void print(){
        cout<<"Complex num is "<<a<<"+i"<<b;
    }
};
int main(){
complex c; //atomatically assigns varibles on obj creation
c.print();
    
return 0;
}
