#include<iostream>
using namespace std;
int main()
{
        int a[100];
    int n,i,j;
    cout<<"enter the size of array: ";
    cin>>n;
    cout<<"enter the elements of array: ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    cout<<"array after sorting is: ";
    for(i=0;i<n;i++)
    cout<<a[i]<<" ";
    return 0;
}
