#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"input the value for creating a number pattern: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        int count=1;
        for(j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(j=1;j<=(2*i-1);j++)
        {
            if(j%2==0)
            cout<<" ";
            else
            { 
                cout<<count;
                count++;
            }
        }
        cout<<endl;
    }
    //if input is 5 then output be like:
    //1
   //1 2
  //1 2 3
 //1 2 3 4
//1 2 3 4 5
    return 0;
}