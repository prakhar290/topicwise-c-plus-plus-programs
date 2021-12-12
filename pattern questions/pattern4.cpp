#include<iostream>
using namespace std;

int main()
{
    int n,i,j;
    cout<<"input the value for creating a half pyramid after 180` rotation: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=n;j>=1;j--)
        {
            if(j>i)
            cout<<" ";
            else 
            cout<<"*";
        }
        cout<<endl;
    }
    //if input is 5 then output be like:
    //    *
    //   **
    //  ***
    // ****
    //*****
    return 0;
}
