#include<iostream>
using namespace std;
int binarysearch(int arr[],int ele,int n)
{
    int start,end,mid;
    start = 0;
    end = n;
    
    while(ele<=arr[end])
    {
        mid = (start+end)/2;
        if(arr[mid]>ele)
        {
            end = mid-1;
        }
        else if(arr[mid]<ele)
        {
            start = mid+1;
        }
        else
        return mid;
    }
    //if(ele>arr[n] || ele<arr[0])
    return -1;
}
int main()
{
    
    int a[100];
    int size,i,element;
    cout<<"enter the size of array: ";
    cin>>size;
    cout<<"enter elements of array in sorted manner: ";
    for(i=0;i<size;i++)
    {
        cin>>a[i];
    }
    cout<<"enter the number you want to search: ";
    cin>>element;
    int pos;
    pos = binarysearch(a,element,size);
    if(pos==-1)
    cout<<"your number is not in array.";
    else
    cout<<"the position of your number after linear search is: "<<pos;
    return 0;
}
