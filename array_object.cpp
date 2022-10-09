#include<iostream>
using namespace std;

class Employee
{
    int id;
    int salary;

    public:
       void setid(void)
       {
        cout<<"Enter id of the employee:"<<endl;
        cin>>id;

       }
       void  getid(void)
       {
        cout<<id <<endl;

       }

};

int main()
{
    Employee e[10];

    for (int i = 0; i < 4; i++)
    {
        e[i].setid();
        e[i].getid();
    }
    
     return 0;

}