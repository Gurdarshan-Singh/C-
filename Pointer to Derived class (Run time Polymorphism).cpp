#include<iostream>
using namespace std;
class base{
    public:
    int var_base;
    void display(){
        cout<<"The value of the base var is "<<var_base<<endl;
    }
};

class derived:public base{
    public:
    int var_der;
    void display(){
        cout<<"The value of the base var is "<<var_base<<endl;
        cout<<"The value of the derived var is "<<var_der<<endl;
        
    }
};
int main(){
    base *p;
    base objb;
    derived objd;
    p= &objd;
    p->var_base=100;
    p->display();

    derived *pd;
    pd=&objd;
    pd->var_base=900;
    pd->var_der=100;
    pd->display();
    


return 0;
}
