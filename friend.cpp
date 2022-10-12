#include<iostream>
using namespace std;

class Complex
{
    int a;
    int b;

    public:


    //Below line means that non member-sumComplex function is allowed to do anything with my private parts(members);
    
    friend Complex sumComplex(Complex o1,Complex o2);

        void setNUmber(int n1,int n2)
        {
            a=n1;
            b=n2;

        }

        void printNumber()
        {
            cout<<"Your number is " <<a <<" + "<<b <<"i" <<endl;

        }
        
};

Complex sumComplex( Complex o1,Complex o2)
{
    Complex o3;

    o3.setNUmber((o1.a+o2.a),(o1.b+o2.b));
    return o3;


}


int main()
{
    Complex c1,c2,sum;

    c1.setNUmber(1,4);
    c1.printNumber();

    c2.setNUmber(5,8);
    c2.printNumber();

     sum=sumComplex(c1,c2);
     sum.printNumber();

    return 0;

}