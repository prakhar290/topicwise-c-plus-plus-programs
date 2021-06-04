#include<iostream>
using namespace std;
int power(int n,int p)
{
    if(p==0)
    {
        return 1;
    }
    int ans = n * power(n,p-1);
    return ans;
}
int main()
{
    int num,pow;
    cout<<"enter the number: ";
    cin>>num;
    cout<<"enter the power value: ";
    cin>>pow;
    cout<<num<<" raised to the power "<<pow<<" is: "<<power(num,pow);
    return 0;
}