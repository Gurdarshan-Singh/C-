#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    complex(int x,int y){    //no return type // parameterized constructor
        a=x;
        b=y;
    }
    void print(){
        cout<<"Complex num is "<<a<<"+i"<<b;
    }
};
int main(){
complex c(1,2); //implicit call
complex d=complex(5,6); //explicit call
c.print();
cout<<endl;
d.print();    
return 0;
}
