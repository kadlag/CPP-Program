#include<iostream>
using namespace std;

class Complex
{
    int a,b;

    public:
     
     Complex(int x,int y);//Declaration of constructor

     void printnumber(void)
     {
        cout<<"complex number is " <<a <<"+" <<b <<"i"<<endl;

     }
};

Complex::Complex(int x,int y)    //---parameterized constructor  with arguments

{
    a=x;
    b=y;
}


int main()
{
     
     Complex c1(10,20);
     c1.printnumber();
    


    return 0;

}