#include<iostream>
using namespace std;
void LargestEle(int arr[],int n){
    int max=arr[0];
    int i;
    for (i = 0; i < n; i++)
    {
        if (max<arr[i])
        {
            max=arr[i];
        }
        
    }
    cout<<"The Index of Largest Number is "<<i-1;
}
int main(){
    int n;
    cout<<"Enter the number of elements in an array :";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of Array :";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    LargestEle(arr,n);
return 0;
}
