#include<iostream>
#include<cmath>
using namespace std;
class SimpleCalculator{
    int choice;
    public:
    void utility(float a,float b){
        cout<<"What do you want to do \n1.Add\n2.Sub\n3.Division\n4.Multiplication"<<endl;
        cin>>choice;
        switch(choice){
            case 1:
            {
                cout<<"Addition of two numbers is "<<a+b<<endl;
                break;
            }
            case 2:
            {
                cout<<"Subtraction of two numbers is "<<a-b<<endl;
                break;
            }
            case 3:
            {
                cout<<"Division of two numbers is "<<a/b<<endl;
                break;
            }
            case 4:
            {
                cout<<"Multiplication of two numbers is "<<a*b<<endl;
                break;  
            }
        }
        
        
        

    }
};
class ScientificCalculator{
    int choice;
    public:
    void scutility(float a){
        cout<<"What do you want to do \n1.Sin\n2.Tan\n3.Cos\n4.Log"<<endl;
        cin>>choice;
        switch(choice){
            case 1:
            {
                cout<<"Sin of first number is "<<sin(a)<<endl;
                break;
            }
            case 2:
            {
        
                cout<<"Tan of first number is "<<tan(a)<<endl;
                break;
            }
            case 3:
            {
                cout<<"Cos of first number is "<<cos(a)<<endl;
                break;
            }
            case 4:
            {
                
                cout<<"Log of first number is "<<log(a)<<endl;
                break;  
            }
        }
        
        
        }

};
class HybridCalculator:public SimpleCalculator,public ScientificCalculator{

};

int main(){
    HybridCalculator der;
    int ch;
    float a,b,c;
    cout<<"You Want to use \n1.Simple calculator\n2.Scientific calculator"<<endl;
    cin>>ch;
    switch(ch){
        case 1:{
            cout<<"Enter the 2 number for Simple calculator "<<endl;
            cin>>a>>b;
            der.utility(a,b);
            break;
        }
        case 2:{
            cout<<"Enter the a number for Simple calculator "<<endl;
            cin>>c;
            der.scutility(c);
            break;
        }
    }
    
return 0;
}
