#include<iostream>
using namespace std;

class Point
{

    int x,y;

    public:
        Point(int a,int b)
        {
            x=a;
            y=b;


        }


      void printdisplay(void )
      {

        cout<<"Point is("<<x<<","<<y<<")"<<endl;

      }     
};


    int main()
    {
        Point c1(1,4);
        c1.printdisplay();

        Point c2(5,6);
        c2.printdisplay();

        return 0;
    }


    