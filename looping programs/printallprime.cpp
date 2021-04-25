#include<iostream>
using namespace std;
int main()
{
    int a,b,i,j;
    cout<<"enter the numbers to print all prime numbers between them: ";
    cin>>a>>b;
    for(j=a;j<b;j++)
    {
        for(i=2;i<j;i++)
        {
            if(j%i==0)
            break;
        }
        if(i==j)
        cout<<j<<" ";
        else 
        continue;
    }
    return 0;
}