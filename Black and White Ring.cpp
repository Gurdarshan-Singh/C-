#include <bits/stdc++.h>
using namespace std;
int main(){
   int T;
   cin>>T;
   while (T--)
   {
   int n,a=0,b=0,s=0;
   cin>>n;
   long long arr[n];
   for (int i = 1; i <=n; i++)
   {
      cin>>arr[i];
      b+=arr[i]==1;
      a+=arr[i]==0;
   }
   for (int i = 1; i <=n; i++)
   {
      if(i==1){
         s+=arr[i]==arr[n];
      }
      else{
         s+=arr[i]==arr[i-1];
      }
   }
   s-=abs(a-b);
   cout<<(s%4==0?"Bob":"Alice")<<endl;
   
   
   }
   return 0;
}
