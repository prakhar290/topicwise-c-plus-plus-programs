#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"input the value for creating a 0-1 pattern: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%2==0 && j%2!=0)
            cout<<"0 ";
            else if(i%2!=0 && j%2==0)
            cout<<"0 ";
            else
            cout<<"1 ";
        }
        cout<<endl;
    }
    //if input is 5 then output be like:
    //1
    //0 1
    //1 0 1
    //0 1 0 1
    //1 0 1 0 1
    return 0;
}