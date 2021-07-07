//Count sort technique is better than other sorting techniques. This is mainly used when array contains duplicates of elements.
//In this techniques we do two things :-
//1. Find the count of ever distinct element in the array
//2. Calculate the position of the element in the sorted array 

#include<iostream>
using namespace std;

void countsort(int a[],int n)
{
    int maxele = INT_MAX;
    for(int i=0;i<n;i++)
    {
        maxele = max(maxele,a[i]); //for finding the size to create the count array
    }
    int count[100] = {0};  //as array size cannot be defined dynamically so we have to do this
    for(int i=0;i<n;i++)
    {
        count[a[i]]++; //incrementing the index values of the element present in the given array to find its count
    }
    for(int i=1;i<maxele;i++)
    {
        count[i] += count[i-1]; //for finding the positions on which we have to put the value to sort the array
    }
    int output[n];
    for(int i=n-1;i>=0;i--)
    {
        output[--count[a[i]]] = a[i]; //this will do the decrement in the position of the element and then put the value at that position
    }
    for(int i=0;i<n;i++)
    {
        a[i] = output[i];
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
    cout<<"your sorted array using count sort technique is:\n";
    countsort(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
