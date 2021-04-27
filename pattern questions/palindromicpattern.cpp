#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"input the value for creating a palindromic pattern: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(j=i;j>=1;j--)
        {
            cout<<j;
        }
        for(j=2;j<=i;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
    //if input is 5 then output be like:
    //1
   //121
  //32123
 //4321234
//543212345
    return 0;
}