#include<iostream>
using namespace std;
void LeftRot(int arr[],int n){
    int temp=arr[0];
    for (int i = 1; i < n; i++)
    {
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
    
    cout<<"New Array is :";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main(){
     int n;
    cout << "Enter the number of elements in an array :";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of Array :";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    LeftRot(arr,n);
return 0;
}
