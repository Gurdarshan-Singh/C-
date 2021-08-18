#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string str1,str2;
    str1="This line is being writen on the sample.txt";
//Opening and Writing on files
ofstream out("sample.txt");
out<<str1;

//Reading From file
ifstream in("sampleb.txt");
getline(in,str2);
cout<<str2;

    
return 0;
}
