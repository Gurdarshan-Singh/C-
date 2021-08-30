#include <iostream>
using namespace std;
int SecondLargestEle(int arr[], int n)
{
    int res=-1,largest=0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i]>arr[largest])
        {
            res=largest;
            largest=i;
        }
        else if (arr[i]!=arr[largest])
        {
           if (res==-1 || arr[i]>arr[res])
           {
               res=i;
           }
           
        }
        
        
    }
    return res;

    
}
int main()
{
    int n;
    cout << "Enter the number of elements in an array :";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of Array :";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int s=SecondLargestEle(arr, n);
    if (s==-1)
    {
        cout<<"Second Largest Element Not found ";
    }
    else
    cout<<"The second largest element is at index :"<<s<<" and the element is : "<<arr[s];
    
    return 0;
}
