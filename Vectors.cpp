#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
        //cout<<v.at(i);       //we can use this too
    }
    cout << endl;
}
int main()
{
    int element, size;
    vector<int> vec1;
    vector<int> vec2(2);    
    vector<int> vec3(2,56);    

    cout << "Enter the no of element you want to add \n";
    cin >> size;
    cout << "Enter the element you want to add \n";
    for (int i = 0; i < size; i++)
    {
        cin >> element;
        vec1.push_back(element);
    }
    cout << "The vector is \n";
    display(vec1);
    vec1.pop_back();
    cout << "Vector after pop \n";
    display(vec1);
    cout<<"Inserting....\n";
    vector<int>::iterator itr = vec1.begin();
    vec1.insert(itr,3,76);
    display(vec1);
    cout<<"The vec 2 is \n";
    display(vec2);
    cout<<"The vec 3 is \n";
    display(vec3);
    return 0;
}
