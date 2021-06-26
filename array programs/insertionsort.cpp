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
    for(i=1;i<n;i++)
    {
        int current = a[i];
        j = i-1;
        while(a[j]>current && j>=0)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = current;
    }
    cout<<"array after sorting is: ";
    for(i=0;i<n;i++)
    cout<<a[i]<<" ";
    return 0;
}
