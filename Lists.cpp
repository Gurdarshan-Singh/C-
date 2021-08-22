#include<iostream>
#include<list>
using namespace std;
void display(list<int> l)
{
    list<int>::iterator it;
    for (it=l.begin();it!=l.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
int main(){
list<int> l1;
l1.push_back(2);
l1.push_back(3);
l1.push_back(5);
l1.push_back(8);
l1.push_back(3);
l1.push_back(3);
l1.push_back(9);
l1.push_back(12);
cout<<"Orignal List 1 : ";
display(l1);
cout<<"Sorted List : ";
l1.sort();
display(l1);
cout<<"POP BACK List : ";
l1.pop_back();
display(l1);
cout<<"POP FRONT List : ";
l1.pop_front();
display(l1);
cout<<"Remove 3 List : ";
l1.remove(3);
display(l1);

list<int> l2(3);
list<int>::iterator itr=l2.begin();
*itr=9;
itr++;
*itr=7;
itr++;
*itr=5;
cout<<"List 2: ";
display(l2);
cout<<"Sorted List : ";
l2.sort();
display(l2);

cout<<"Merging both Lists : ";
l1.merge(l2);
display(l1);

cout<<"Reversing List :";
l1.reverse();
display(l1);
cout<<"List 1 : ";
display(l1);

list<int> l3(4,8);
cout<<"List 3 : ";
display(l3);
cout<<"Swapping values of lists :\n";
l1.swap(l3);
cout<<"List 1 : ";
display(l1);
cout<<"List 3 : ";
display(l3);

return 0;
}
