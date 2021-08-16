#include<iostream>
using namespace std;
class base{
    public:
    int var_base=10;
    virtual void display(){
        cout<<"The value of the base var is "<<var_base<<endl;
    }
};

class derived:public base{
    public:
    int var_der=20;
    void display(){
        cout<<"The value of the base var is "<<var_base<<endl;
        cout<<"The value of the derived var is "<<var_der<<endl;
        
    }
};
int main(){
    base *bptr;
    base objb;
    derived objd;
    bptr=&objd;
    bptr->display(); //now display function of derived will be called
    
return 0;
}
