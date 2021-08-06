#include<iostream>
using namespace std;
class student{
    protected:
    int roll;
    public:
    void setroll(int a){
        roll=a;
    }
    void getroll(void){
        cout<<"Roll number is :"<<roll<<endl;
    }
};
class test:virtual public student{
    protected:
    int maths,physics;
    public:
    void setmarks(int x,int y){
        maths=x;
        physics=y;
    }
    void getmarks(void){
        cout<<"Maths marks are : "<<maths<<endl;
        cout<<"Physics marks are : "<<physics<<endl;
    }
};
class sports:virtual public student{
    protected:
    int sp;
    public:
    void setsp(int m){
        sp=m;
    }
    void getsp(void){
        cout<<"Sports marks are : "<<sp<<endl;
    }
};

class result:public test,public sports{
    protected:
    int res;
    public:
    void getres(){
        getroll();
        getmarks();
        getsp();
        res=maths+physics+sp;
        cout<<"The result is :"<<res;

    }
    
};

int main(){
    result sonu;
    sonu.setroll(1);
    sonu.setmarks(99,98);
    sonu.setsp(99);
    sonu.getres();
    
return 0;
}
