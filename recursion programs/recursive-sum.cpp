#include<iostream>
using namespace std;
int sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    int newsum = sum(n-1);
    return n + newsum;
}
int main()
{
    int num;
    cout<<"enter the number to where you find the sum: ";
    cin>>num;
    cout<<"sum till "<<num<<" is: "<<sum(num);
    return 0;
}