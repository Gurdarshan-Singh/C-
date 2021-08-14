#include<iostream>
using namespace std;

int main(){
    //array
    int arr[3]={1,2,3};
    int *p=arr;
    cout<<p[1]<<endl;

    //single variable
    int a=5;
    int *pt=&a;
    cout<<*pt;


return 0;
}
