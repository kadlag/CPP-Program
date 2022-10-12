#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(void)//Default constructor
    {
        a = 0;
        b = 0;
    }

    Complex(int x, int y) //Parameterised constructor
    {                        //Constructor overloading means constructor name same but different parameter list
        a = x;
        b = y;
    }

    Complex(int x)
    {
        a = x;
        b = 0;
    }

    void printnumber()
    {
        cout << "complex number is " << a << "+" << b << "i" << endl;
    }
};

int main()
{
    Complex c1(2, 5);
    c1.printnumber();

    Complex c2(3);
    c2.printnumber();

    Complex c3;
    c3.printnumber();

    return 0;
}