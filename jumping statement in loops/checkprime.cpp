#include<iostream>
using namespace std;
int main()
{
    int num,i;
    cout<<"enter the number you want check whthere it is prime or not: ";
    cin>>num;
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        break;
    }
    if(i==num)
    cout<<num<<" is prime.";
    else
    cout<<num<<" is not prime.";
    return 0;
}