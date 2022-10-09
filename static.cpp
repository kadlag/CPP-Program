#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setdata(void)
    {
        cout << "Enter Id of the number" << endl;
        cin >> id;
        count++;
    }

    void getdata(void)
    {
        cout << "Employee Id is  " << id << " of count " << count << endl;
    }

    
    //Static data function
    static void  getcount(void)
    {
        cout<<"The value of count is" << count <<endl;

    }
};

//Count is static data member of employee
int Employee::count;//Default value is zero

int main()
{

    Employee sakshi,sanvi,radha;

    sakshi.setdata();
    sakshi.getdata();
    Employee::getcount();//Static function call


    sanvi.setdata();
    sanvi.getdata();
    Employee::getcount();//Static function call


    radha.setdata();
    radha.getdata();
    Employee::getcount();//Static function call


}
 