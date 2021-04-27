#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"input the value for creating a inverted pattern: ";
    cin>>n;
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
    //if input is 5 then output be like:
    //12345
    //1234
    //123
    //12
    //1
    return 0;
}