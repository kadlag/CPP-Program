#include <iostream>
using namespace std;

int main()
{
    // what is pointer?----->data type which holds  the address of other data types
    int a = 3;
    int *b = &a;

    //&----->(Address of) operator
    cout << "The address of a is  " << &a << endl;
    cout << "The address of a is  " << b << endl;

    //*------>(value at)Dereference operator
    cout << "Value at a is " << *b << endl;

    cout<<"*************************"<<endl;

    //Pointer to Pointer

    int **c=&b;

    cout<<"The address of b is:  "<< &b  <<endl;
    cout<<"The address of b is:  "<<c <<endl;

    cout<<"Value at c is:  "<<*c <<endl;
    cout<<"Value at c (value at c):    "<<**c <<endl; 


    return 0;
}
