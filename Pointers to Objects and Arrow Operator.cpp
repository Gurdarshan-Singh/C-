#include<iostream>
using namespace std;
class complex{
    int real, imaginary;
    public:
    void setdata(int a,int b){
        real =a;
        imaginary=b;    
        }    
    void getdata(){
        cout<<"the value of real is "<<real<<endl;
        cout<<"the value of imaginary is "<<imaginary<<endl;
    }
};
int main(){
    complex sonu;
    complex *ptr= &sonu;
    sonu.setdata(1,4);
    sonu.getdata();

    //upper code is same as below

    (*ptr).setdata(3,5);
    (*ptr).getdata();

    //and also same as this

    ptr->setdata(10,9);
    ptr->getdata();

    complex *p=new complex;
    p->setdata(1,2);
    p->getdata();
    //-------------------------------------------------------------------//
    //Arrays
    complex *point= new complex[3];
    point->setdata(9,8);
    point->getdata();


    
return 0;
}
