#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

int main(){
    int arr[]={1,26,45,2,99,65};
    cout<<"Ascending order\n";
    sort(arr,arr+6);                        //for ascending order
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Descending order\n";
    sort(arr,arr+6,greater<int>());         //for descending order
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
return 0;
}
