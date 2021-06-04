#include<iostream>
using namespace std;
int factorial(int n)
{
    if(n==0)
    return 1;
    return n * factorial(n-1);
}
int main()
{
    int num;
    cout<<"enter the number to find the factorial using recursion: ";
    cin>>num;
    cout<<"factorial of "<<num<<" is: "<<factorial(num);
    return 0;
}