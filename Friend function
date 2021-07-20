#include<iostream>
using namespace std;
class complex{
    int a;
    int b;
    friend complex sum(complex v1,complex v2);
    public:
    void setdata(int v1,int v2){
        a=v1;
        b=v2;
    }
    
    void print(){
        cout<<"\nComplex Number is "<<a<<"+i"<<b;
    }

};
complex sum(complex v1,complex v2){
    complex v3;
    v3.setdata((v1.a+v2.a),(v1.b+v2.b));
    return v3;

}
int main(){
    complex v1,v2,summ;
    v1.setdata(1,2);
    v1.print();

    v2.setdata(3,4);
    v2.print();
    
    summ=sum(v1,v2);
    summ.print();
   
return 0;
}
