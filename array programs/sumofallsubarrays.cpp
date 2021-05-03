//ques- given an array of size n. output will be the sum of each subarray of the given array. 
//      where subaaray is the continous part of an array.
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
        int sum=0;
        for(j=i;j<n;j++)
        {
            sum = sum + a[j];
            cout<<"sum of subarray is: "<<sum<<"\t";
        }
        cout<<endl;
    }
    return 0;
}