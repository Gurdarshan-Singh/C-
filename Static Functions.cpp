#include <iostream>
using namespace std;
class emp
{
    int id;
    static int count; //obj uses one count var
public:
    void setdata()
    {
        cout << "Enter the id ";
        cin >> id;
        count++;
    }
    void getdata()
    {
        cout << "Id is " << id << endl
             << "Employee no is " << count << endl;
    }
    static void getcount(){ //only acess static data members
        cout<<count<<endl;
    }
};
int emp::count = 100; //imp to use int and initialise and we can set value to 100 or any but not in above declaration
int main()
{
    emp sonu, mickey;
    sonu.setdata();
    sonu.getdata();
    emp::getcount();

    mickey.setdata();
    mickey.getdata();
    emp::getcount();
    return 0;
}
