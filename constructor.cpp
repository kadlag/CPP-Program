#include<iostream>
using namespace std;

class Complex
{
    int a,b;

    public:
     
     Complex(void);//Declaration of constructor

     void printnumber(void)
     {
        cout<<"complex number is " <<a <<"+" <<b <<"i"<<endl;

     }
};

Complex::Complex(void)    //---Default constructor

{
    a=10;
    b=20;
}


int main()
{
     Complex c1,c2,c3;

     c1.printnumber();
     c2.printnumber();
     c3.printnumber();


    return 0;

}