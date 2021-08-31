//Fibonacci Series with Recursion 
#include<iostream>
using namespace std;
int fib(int n){
    if(n<2){
        return n;
    }
    return fib(n-1)+fib(n-2);
}
int main(){
    int n;
    cout<<"Enter which value you want to see ";
    cin>>n;  
    cout<<"The value at "<<n<<" is "<<fib(n);
return 0;
}
