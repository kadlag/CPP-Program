#include<iostream>
using namespace std;

class Employee
{
    private:
     int a,b,c;
     
    public:
      int  d,e;

      void setdata(int a1,int b1, int c1);//Declaration

      void getdata()
      {
        cout<<"Value of a"<<a<<endl;
        cout<<"Value of b"<<b<<endl;
        cout<<"Value of c"<<c<<endl;    
        cout<<"Value of d"<<d<<endl;    
        cout<<"Value of e"<<e<<endl;       
      }


    
};

void Employee::setdata(int a1,int b1,int c1)
{
      a=a1;
      b=b1;
      c=c1;


}


int main()
{

Employee emp;

emp.setdata(1,2,3);

emp.d=20;
emp.e=32;
emp.getdata();





    return 0;
}