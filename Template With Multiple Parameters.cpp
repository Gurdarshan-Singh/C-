#include<iostream>
using namespace std;
template<class T1,class T2>
class Mulp{
    public:
    T1 data1;
    T2 data2;
    Mulp(T1 a,T2 b){
        data1=a;
        data2=b;
    }
    void display(){
        cout<<this->data1<<endl<<this->data2<<endl;  // we can use data1 and data2 //it is same as of this->data1 and this->data2
    }

};
int main(){
    Mulp <int,char>harry(24,'H');
    harry.display();
    Mulp <int,float>mickey(2,6.099);
    mickey.display();
return 0;
}
