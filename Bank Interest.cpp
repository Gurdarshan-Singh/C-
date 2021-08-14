#include<iostream>
using namespace std;
class bank{
float princicpal;
float years;
float interestRate;
float returnValue;
public:
bank(){};
bank(float p , float y, float r){
    princicpal=p;
    years=y;
    interestRate=r;
    returnValue = princicpal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue*(1+interestRate);
    }
    
}
bank(float p , float y, int R){
    princicpal=p;
    years=y;
    interestRate=(float(R)/100);
    returnValue = princicpal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue*(1+interestRate);
    }

}
void show(){
    cout<<"The principle is "<<princicpal<<" and after "<<years<<"years will become "<<returnValue<<endl;
}
};
int main(){
    bank b1,b2,b3;
    float p,y,r;
    int R,d;
    cout<<"You want to enter the value of interest rate in "<<endl<<"1.Decimal "<<endl<<"2.Percentage"<<endl;
    cin>>d;
     switch (d)
     {
     
    case 1:
    cout<<"Enter the value of principal, years and interest rate(in decimals) "<<endl;
    cin>>p>>y>>r;
    b1= bank(p,y,r);
    b1.show();
    break;

    case 2:
    cout<<"Enter the value of principal, years and interest rate(in percentage) "<<endl;
    cin>>p>>y>>R;
    b2= bank(p,y,R);
    b2.show();
    break;
     }
return 0;
}
