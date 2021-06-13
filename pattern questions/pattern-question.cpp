//given a mtrix M of size n*n consisting of 0s and 1s only. The taks is to find the column with maximum number of 0s.
#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"enter the size of square matrix: ";
    cin>>n;
    int a[n][n];
    cout<<"enter the elements of matrix in 0 and 1 only: ";
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"your matrix is:\n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    int max=0;
    cout<<"the column having maximum number of 0s is: ";
    for(i=0;i<n;i++)
    {
        int count=0;
        for(j=0;j<n;j++)
        {
            if(a[j][i]==0)
            count++;
        }
        if(count>max)
        max=i;
    }
    cout<<max;
    return 0;
}