#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int num,rem,sum=0;
    cout<<"enter the number to check whether it is armstrong or not: ";
    cin>>num;
    int n=num;
    while(n>0)
    {
        rem =n%10;
        n=n/10;
        sum = sum + pow(rem,3);
    }
    if(sum==num)
    cout<<"entered number is armstrong number.";
    else
    cout<<"entered number is not armstrong number.";
    return 0;
}