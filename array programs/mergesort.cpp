//in merge sort we have to sort a given array by using/applying the logic of merging two sorted arrays. 
// so in merge sort firstly we divide the array into smaller arrays such that the array size become 1. As we know that every single number is
// sorted in itself so by dividing array into smaller ones we are getting the small sorted arrays after that we will merge those 
// small arrays by applying the method of merging two sorted arrays. so by doing this, in the end, our given array becomes sorted.
//for ex we have array1 ={18 12 14 15 9} so the after merge sort we should get array1 = {9 12 14 15 18}
// for dividing the array into smaller one's we will use recursion
#include<iostream>
using namespace std;
void merge(int a[],int beg,int mid,int end)
{
    int i,j,l,r,k=0;
    l = mid+1;
    r = end-mid;
    int larr[l],rarr[r]; //temporary arrays to merge the parts of array to get sorted complete array
    for(i=0;i<l;i++)
    {
        larr[i]=a[i];
    }
    for(j=0;j<r;j++)
    {
        rarr[j]=a[mid+j+1];
    }
    i=0;
    j=0;
    while(i<l && j<r)
    {
        if(larr[i]<rarr[j])
        {
            a[k]=larr[i];
            i++;
        }
        else 
        {
            a[k]=rarr[j];
            j++;
        }
        k++;
    }
    if(i<l)
    {
        while(i<l)
        {
            a[k]=larr[i];
            i++;
            k++;
        }
    }
    if(j<r)
    {
        while(j<r)
        {
            a[k]=rarr[j];
            j++;
            k++;
        }
    }
}
void dividearray(int a[],int beg,int end)
{
    if(beg==end)
    {
        return; // base condition
    }
    int mid = (beg+end)/2;
    dividearray(a,beg,mid);
    dividearray(a,mid+1,end);
    merge(a,beg,mid,end);
}
int main()
{
    
    int a[100];
    int n,i;
    cout<<"enter the size of array: ";
    cin>>n;
    cout<<"enter the elements of array: ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int beg=0,end=n-1;
    dividearray(a,beg,end);
    cout<<"your sorted array is: ";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
