//ques-given ann array a[] of size n. for every i from 0 t n-1 output comes out as max(a[0],a[1].....a[i])
#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"enter the size of array: ";
    cin>>n;
    int a[n];
    cout<<"enter the elements: ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        int max = a[i];
        for(j=0;j<=i;j++)
        {
            if(a[j]>a[i])
            max = a[j];
        }
        cout<<"max till index "<<i<<" is: "<<max<<endl;
    }
    return 0;
}
