#include<iostream>
using namespace std;
class shop{
    int id;
    float price;
    public:
    void setdata(int a , int b){
        id =a;
        price=b;

    }
    void getdata(){
        cout<<"The id is "<<id<<endl;
        cout<<"The price is "<<price<<endl;
    }
};
int main(){
        
    int size =3;
    int p;
    float q;
    shop *pr= new shop[size];
    shop *ptrTemp = pr;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter id and price "<<endl;
        cin>>p>>q;
        pr->setdata(p,q);
        pr++;
    }

    for (int i = 0; i < size; i++)
    {
        ptrTemp->getdata();
        ptrTemp++;
    }
    
    return 0;
    }
