#include<iostream>
using namespace std;
int linearsearch(int arr[],int ele,int n)
{
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]==ele)
        return i;
    } 
    return -1;
}
int main()
{
    
    int a[100];
    int size,i,element;
    cout<<"enter the size of array: ";
    cin>>size;
    cout<<"enter elements of array: ";
    for(i=0;i<size;i++)
    {
        cin>>a[i];
    }
    cout<<"enter the number you want to search: ";
    cin>>element;
    int pos;
    pos = linearsearch(a,element,size);
    if(pos==-1)
    cout<<"your number is not in array.";
    else
    cout<<"the position of your number after linear search is: "<<pos;
    return 0;
}
