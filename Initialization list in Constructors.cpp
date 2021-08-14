#include<iostream>
using namespace std;
/*
Syntax for initialization list in constructor:
constructor (argument-list) : initilization-section
{
    assignment + other code;
}

class Test{
    int a;
    int b;
    public:
        Test(int i, int j) : a(i), b(j){constructor-body}
};*/
class test{
    int a;
    int b;
    public:
    // test(int i, int j) : a(i), b(j){
    // test(int i, int j) : a(i), b(i+j){
    // test(int i, int j) : a(i), b(2 * j){
    // test(int i, int j) : a(i), b(a + j){
    // test(int i, int j) : b(j), a(i+b){ //-->RED Flag this will create problems because a will be initialized first
    // test(int i,int j):a(i),b(j){
        cout<<"The Value of a is "<<a<<endl;
        cout<<"The Value of b is "<<b<<endl;

    }

};
int main(){
    test x(5,6);
    
return 0;
}
