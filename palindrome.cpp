#include<iostream>
using namespace std;

int main()
{

int rem;
int rev=0;
int num;
cout<<"Enter a number\n";
cin>>num;

int temp=num;


while(num>0)
{
    rem=num%10;
    rev=rev*10+rem;
    num=num/10;
}

if(rev==temp)
{
    cout<<"Number is palindrome";
}

else
{
    cout<<"Number is not palindrome";
}
return 0;

}