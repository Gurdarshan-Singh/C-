#include<iostream>
using namespace std;
class emp{
    int id;
    static int count; //obj uses one count var and default value is 0
    public:
    void setdata(){
        cout<<"Enter the id ";
        cin>>id;
        count++;
    }
    void getdata(){
        cout<<"Id is "<<id<<endl<<"Employee no is"<<count<<endl;
    }
};
int emp::count=100;//imp to use int and initialise and we can set value to 100 or any but not in above declaration
int main(){
    emp sonu,mickey;
    sonu.setdata();
    sonu.getdata();

    mickey.setdata();
    mickey.getdata();

    
return 0;
}
