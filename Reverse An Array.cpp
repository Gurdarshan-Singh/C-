#include<iostream>
using namespace std;
void reverse(int arr[],int n){
    int low=0,high=n-1;
    while (low<high)
    {
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
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
    reverse(arr,n);
return 0;
}


---------------------------------------------------------------------------OR------------------------------------------------------------------
  #include<iostream>
using namespace std;
void reverse(int arr[],int n){
    int count=n-1;
    for (int i = 0; i < n/2; i++)
    {   
        swap(arr[i],arr[count]);
        count--;
    }
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
    reverse(arr,n);
return 0;
}
                                                      
                                                   
