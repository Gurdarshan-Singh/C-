//Array in class
#include <iostream>
using namespace std;
class shop
{
    int price[100];
    int id[100];
    int counter;

public:
    void init() { counter = 0; }
    void set();
    void display();
};
void shop::set()
{
    cout << "Enter the Id of item number " << counter + 1 << endl;
    cin >> id[counter];
    cout << "Enter the price of item number " << counter + 1 << endl;
    cin >> price[counter];
    counter++;
}
void shop::display()
{
    
    cout << "\nId of item number " << counter + 1 << endl;
    cout << id[counter];
    cout << "\nPrice of item number " << counter + 1 << endl;
    cout << price[counter];
    counter++;
}
int main()
{
    shop reliance;
    int n;
    cout << "Enter the number of items you want to add ";
    cin >> n;
    reliance.init();
    for (int i = 0; i < n; i++)
    {
        reliance.set();
    }
    reliance.init();
    for (int i = 0; i < n; i++)
    {
        reliance.display();
    }

    return 0;
}
