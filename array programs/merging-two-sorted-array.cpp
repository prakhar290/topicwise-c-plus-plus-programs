// merging two sorted array not simply means that we have to merge one array into other, it means that we have to merge the given arrays
// in a sorted manner so that the final array we are getting is sorted by itself.
//for ex: suppose we have array1 = {12,5,8,9}  and array2 = {1,3,6,13,20} so the resultant array would be {1,3,5,6,8,9,12,13,20}
#include<iostream>
using namespace std;
void merge(int a[],int b[],int n1,int n2)
{
    int i=0,j=0,k=0;
    int n3=n1+n2;
    int c[n3];
    while((i<n1) && (j<n2))
    {
        if(a[i]<b[j])
        {
            c[k]=a[i];
            i++;
        }
        else 
        {
            c[k]=b[j];
            j++;
        }
        k++;
    }
    if(i<n1)
    {
        while(i<n1)
        {
            c[k]=a[i];
            i++;
            k++;
        }
    }
    else if(j<n2)
    {
        while(j<n2)
        {
            c[k]=b[j];
            j++;
            k++;
        }
    }
    for(i=0;i<n3;i++)
    {
        cout<<c[i]<<" ";
    }
}
int main()
{
    int n1,n2,i;
    cout<<"enter the size of first array: ";
    cin>>n1;
    int a[n1];
    cout<<"enter the elements of first array: ";
    for(i=0;i<n1;i++)
    {
        cin>>a[i];
    }
    cout<<"enter the size of second array: ";
    cin>>n2;
    int b[n2];
    cout<<"enter the elements of second array: ";
    for(i=0;i<n2;i++)
    {
        cin>>b[i];
    }
    cout<<"your array after merging given two arrays is: ";
    merge(a,b,n1,n2);
    return 0;
}