#include<iostream>
using namespace std;

int main()
{
    int num; 
    int rem;
    int fact;
     int count=0;

    cout<<"Enter a number\n";
    cin>>num;

    int temp=num;

    while(num>0)
    {
       rem=num%10;
       fact=1;

       for(int i=1;i<=rem;i++)
       {
            fact=fact*i;
      
       }

       count=count+fact;

       num=num/10;



    }


    if(count==temp)
    {
        cout<<"Number is pronic";
    }

    else
    {
        cout<<"Number is not pronic";

    }
    
}
