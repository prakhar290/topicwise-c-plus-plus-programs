#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"input the value for creating a butterfly pattern: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=2*n;j++)
        {
            if(j<=i || j>(2*n-i))
            cout<<"*";
            else
            cout<<" ";
        }
        cout<<endl;
    }
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=2*n;j++)
        {
            if(j<=i || j>(2*n-i))
            cout<<"*";
            else
            cout<<" ";
        }
        cout<<endl;
    }
    //if input is 4 then output be like:
    //*      *
    //**    **
    //***  ***
    //********
    //********
    //***  ***
    //**    **
    //*      *
    return 0;
}