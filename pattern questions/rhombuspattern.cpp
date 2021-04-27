#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"input the value for creating a rhombus pattern: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(j=1;j<=n;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    //if input is 5 then output be like:
    //    *****
    //   *****
    //  *****
    // *****
    //*****
    return 0;
}