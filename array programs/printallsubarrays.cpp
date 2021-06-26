#include<iostream>
using namespace std;
int main()
{

    int a[100];
    int i,n,j;
    cout<<"enter the size of array: ";
    cin>>n;
    cout<<"enter the elements of array: ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"your all subarrays are:\n ";
    for(i=0;i<n;i++)
    {
        for(int k=i;k<n;k++)
        {
            for(j=i;j<=k;j++)
            {
                cout<<a[j]<<" ";
            }
            cout<<"\t";
        }
        cout<<endl;
    }
    return 0;
}
