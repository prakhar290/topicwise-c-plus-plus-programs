#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"input the value for creating a floyd's triangle: ";
    cin>>n;
    int a=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<a<<" ";
            a++;
        }
        cout<<endl;
    }
    //if input is 5 then output be like:
    //1
    //2 3
    //4 5 6
    //7 8 9 10
    //11 12 13 14 15
    return 0;
}