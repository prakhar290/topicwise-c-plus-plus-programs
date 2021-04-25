#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter three numbers to find which one is greater than all: ";
    cin>>a>>b>>c;
    if(a>b)
    {
        if(a>c)
        cout<<a<<" is greater than all";
    }
    else if(b>a)
    {
        if(b>c)
        cout<<b<<" is gretaer than all";
    }
    else
    cout<<c<<" is greater than all";
    return 0;
}