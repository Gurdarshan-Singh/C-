#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
ofstream fout;
fout.open("sample.txt");
fout<<"This is being written onto the file \n";
fout<<"Hello World";
fout.close();

string str;
ifstream fin;
fin.open("sample.txt");
while (fin.eof()==0)
{
    getline(fin,str);
    cout<<str<<endl;
}
fin.close();

return 0;
}
