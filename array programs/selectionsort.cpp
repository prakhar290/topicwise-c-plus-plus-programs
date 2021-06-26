#include<iostream>
using namespace std;
int main()
{
    
    int a[100];
    int n,i,j;
    cout<<"enter the size of array: ";
    cin>>n;
    cout<<"enter the elements: ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            
            if(a[j]<a[i])
            {
                int temp=a[j];
                a[j] = a[i];
                a[i]= temp;
            }
        }
    }
    cout<<"your array after sorting is: ";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
