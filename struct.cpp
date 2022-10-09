#include<iostream>
using namespace std;

int main()
{

   typedef struct student
    {
        int rno;
        string name;

        

    }stud;

      stud sakshi;
      sakshi.rno=1;
      sakshi.name="Sakshi";

       cout<<sakshi.rno<<endl;
       cout<<sakshi.name<<endl;


    return 0;

}