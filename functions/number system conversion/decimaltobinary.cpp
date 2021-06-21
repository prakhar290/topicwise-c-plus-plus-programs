#include<bits/stdc++.h>
using namespace std;
void decimaltobinary(int n)
{
    int a[10];
    int i=0,count=0;
    for(int j=0;j<10;j++)
    {
        a[j]=0;
    }
    while(n>0)
    {
        a[i]=n%2;
        n = n/2;
        i++;
        count++;
    }
    for(int j=count-1;j>=0;j--)
    {
        cout<<a[j];
    }
}
int main()
{
    int num;
    cout<<"enter a decimal number to find its binary conversion: ";
    cin>>num;
    cout<<"binary conversion of "<<num<<" is: ";
    decimaltobinary(num);
    return 0;
}
