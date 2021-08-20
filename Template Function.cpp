#include<iostream>
using namespace std;
template<class T1, class T2>
float avg(T1 a, T2 b){
    float ag=(a+b)/2.0;
    return ag;
}
template<class T,class T2>
void swap(T &a,T &b){
    T temp;
    temp=a;
    a=b;
    b=temp;
    }
int main(){
    int a,b;
    float average;
    cout<<"Enter the value of a "<<endl;
    cin>>a;
    cout<<"Enter the value of b "<<endl;
    cin>>b;
    average=avg(a,b);
    cout<<"Average :"<<average<<endl;
    swap(a,b);
    cout<<"After Swapping"<<endl;
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of b is "<<b<<endl;
return 0;
}
