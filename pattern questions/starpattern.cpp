#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"input the value for creating a star pattern: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(j=i;j>=1;j--)
        {
            cout<<"*";
        }
        for(j=2;j<=i;j++)
        {
            cout<<"*";
        }
        
        cout<<endl;
    }
    for(i=n;i>=1;i--)
    {
        for(j=n-i;j>=1;j--)
        {
            cout<<" ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        for(j=i;j>=2;j--)
        {
            cout<<"*";
        }
        
        cout<<endl;
    }
    //if input is 5 then output be like:
//    *
//   ***
//  *****
// *******
//*********
//*********
// *******
//  *****
//   ***
//    *
    return 0;
}