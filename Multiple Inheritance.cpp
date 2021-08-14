#include<iostream>
using namespace std;
class base1{
    protected:
    int var1;
    public:
    void getvar1(int a){
        var1=a;
    }
};
class base2{
    protected:
    int var2;
    public:
    void getvar2(int a){
        var2=a;
    }
};
class derived:public base1,public base2
{
    public:
    void show(){
        cout<<"the value of var 1 is "<<var1<<endl;
        cout<<"the value of var 2 is "<<var2<<endl;
        cout<<"the value of var 1 + var 2 is "<<var1+var2<<endl;
        
    }
};
int main(){
    derived der;
    der.getvar1(10);
    der.getvar2(20);
    der.show();
    
return 0;
}
