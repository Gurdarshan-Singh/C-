#include<iostream>
using namespace std;
int del(int arr[],int n,int x){
    int i;
    for (i = 0; i <n; i++)
    {
        if (arr[i]==x)
        {
         break;
        }
        
    }
    if(i==n){
        return n;
    }
    for (int j = i; j < n; j++)
    {
        arr[j]=arr[j+1];
    }
    return n-1;
    
}
int main(){
int x,n=6;
int arr[6]={1,45,5,6,56,8};
cout<<"Enter the element you  want to delete :";
cin>>x;
del(arr,n,x);
cout<<"New Array is : ";
for (int i = 0; i < n-1; i++)
{
    cout<<arr[i]<<" ";
}


return 0;
}
