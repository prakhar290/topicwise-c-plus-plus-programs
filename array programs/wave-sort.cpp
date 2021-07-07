//In wave sort techniques we do not have to sort the array in ascending or descending form instead of that we have arrange trhe elements
//in a fashion such that every 2n element is smaller than its neighbouring elements. 
//For example : we have an array {4 2 1 3 6 5 7} so the output array will be like {4 1 3 2 6 5 7}

#include<iostream>
using namespace std;
void wavesort(int a[],int n)
{
    for(int i=1;i<n;i+=2)
    {
        if(a[i]>a[i-1])
        {
            swap(a[i],a[i-1]);
        }
        if(a[i]>a[i+1] && i<=n-2) //we also have to check for the size of the array as if i+1>n so there will be the error 
        {
            swap(a[i],a[i+1]);
        }
    }
}
int main()
{
    int a[100];
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    cout<<"enter the elements of array: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"your array after using wave sort technique is:\n";
    wavesort(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}