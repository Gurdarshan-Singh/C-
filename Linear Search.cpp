#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Number of Elements in an Array :";
    cin>>n;
    int arr[n],x;
    cout<<"Enter elements of Array :";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter element you want to search :";
    cin>>x;
    for (int i = 0; i <= n; i++)
    {
        if (arr[i]==x)
        {
        cout<<"Element Found at "<<i+1<<" Position";
        break;
        }
        else if (i==n)
        {
        cout<<"Element not Found";
        }    
        else if (arr[i]!=x)
        {
            continue;
        }
    }
    
return 0;
}
