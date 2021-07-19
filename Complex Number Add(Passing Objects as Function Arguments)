#include<iostream>
using namespace std;
class complex{
    int a;
    int b;
    public:
    void setdata(int v1,int v2){
        a=v1;
        b=v2;
    }
    void sum(complex v1,complex v2){
        a=v1.a+v2.a;
        b=v1.b+v2.b;

    }
    void print(){
        cout<<"\nComplex Number is "<<a<<"+i"<<b;
    }

};
int main(){
    complex v1,v2,v3;
    v1.setdata(1,2);
    v1.print();

    v2.setdata(3,4);
    v2.print();

    v3.sum(v1,v2); // passing abjects to fuinctions
    v3.print();
return 0;
}
