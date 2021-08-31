#include<iostream>
using namespace std;
void MovZero(int arr[],int n){
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]!=0)
        {   
            swap(arr[i],arr[count]);
            count++;
        }
        
    }
    cout<<"New Array is :";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    

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
    
    MovZero(arr,n);
return 0;
}
