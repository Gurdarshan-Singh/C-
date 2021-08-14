#include<iostream>
using namespace std;

int main(){
    //basic
    int a=4;
    int *ptr= &a;
    cout<<"The value of a is "<<*ptr<<endl;

    //new operator
    float *p = new float(40);
    cout<<"The value of b is "<<*p<<endl;

    int *arr= new int[3];
    arr[0]=56;
    *(arr+1)=54;
    arr[2]=67;
    delete[] arr; //deallocates memory "delete arr" for simple vars
    //this will give us garbage values
    cout<<"The value of value 1 in array is "<<arr[0]<<endl;
    cout<<"The value of value 2 in array is "<<arr[1]<<endl;
    cout<<"The value of value 3 in array is "<<arr[2]<<endl;

    



return 0;
}
