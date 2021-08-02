#include<iostream>
using namespace std;
class emp{
public:
int id;
float salary;
emp(){}
emp(int empid){
    id=empid;
    salary=90.0;
}

};
// Derived Class syntax
/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}
Note:
1. Default visibility mode is private
2. Public Visibility Mode: Public members of the base class becomes Public members of the derived class
3. Private Visibility Mode: Public members of the base class becomes Private members of the derived class
4. Private members are never inherited
*/


class programmer: public emp
{
    public:
    int langcode= 9;
    programmer(int inpid){
        id=inpid;

    }
    void getdata(){
        cout<<id<<endl;
    }

};



int main(){
    emp sonu(3),mickey(4);
    cout<<sonu.salary<<endl;
    cout<<mickey.salary<<endl;
    programmer guru(1),prabh(2);
    cout<<guru.id<<endl;;
    cout<<prabh.id<<endl;
    guru.getdata();

    
return 0;
}
