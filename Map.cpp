#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
map<string,int> clMap;
clMap["Atul"]=98;
clMap["Sonu"]=100;
clMap["Mickey"]=100;
clMap["Chinu"]=98;
clMap["Raju"]=96;
clMap.insert({{"Adam",97},{"Panda",98}});
map<string,int> ::iterator itr;
for (itr=clMap.begin(); itr!=clMap.end(); itr++)
{
    cout<<(*itr).first<<" "<<(*itr).second<<endl;
}

return 0;
}
