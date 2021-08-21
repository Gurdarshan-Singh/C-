#include<iostream>
using namespace std;
void func(int a){
    cout<<"\nI am normal fn() "<<a;
}
template<class T>
void func(T a){
    cout<<"\nI am template fn() "<<a;
}
template<class T>
class Guru{
    public:
    T data;
    Guru(T a){
        data=a;
    }
    void display();
};
template<class T>
void Guru<T>::display(){   //We can use this method for member function of the class
    cout<<data;
}
int main(){
    Guru<int>son(20);
    son.display(); 
    func(40);              //Take more relevent fn() that is normal fn()
return 0;
}
