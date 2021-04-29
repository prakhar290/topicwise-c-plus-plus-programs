#include<iostream>
using namespace std;
int factorial(int num)
{
    int fact=1;
    while(num>1)
    {
        fact = fact * num;
        num--;
    }
    return fact;
}
int calcncr(int n,int r)
{
    int factn,factr,factdif;
    factn = factorial(n);
    factr = factorial(r);
    factdif = factorial(n-r);
    return factn/(factdif*factr);
}
int main()
{
    int num,valuer;
    cout<<"enter the value of n and r to calculate its NcR: ";
    cin>>num>>valuer;
    cout<<"the calculated value of NcR is: "<<calcncr(num,valuer);
    return 0;
}