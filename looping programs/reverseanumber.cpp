#include<iostream>
using namespace std;
int main()
{
    int num,i,rev=0,rem;
    cout<<"enter a number to reverse it completely: ";
    cin>>num;
    while(num>0)
    {
        rem = num%10;
        num = num/10;
        rev = rev*10 + rem;
    }
    num = rev;
    cout<<"number after reversing completely is: "<<num;
    return 0;
}