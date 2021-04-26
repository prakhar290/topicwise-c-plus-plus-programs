#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"input the value for creating a floyd's triangle: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j<=i)
            cout<<i;
        }
        cout<<endl;
    }
    //if input is 5 then output be like:
    //1
    //22
    //333
    //4444
    //55555
    return 0;
}