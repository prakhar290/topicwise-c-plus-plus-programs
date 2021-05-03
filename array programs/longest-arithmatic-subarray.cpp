//arithmatic subarray is an array in which the difference between two consecutive array elements is same.
//for ex - an array is a[5] = {10 7 4 6 5} so the longest arithmatic subarray is {10 7 4} as (10-7)=(7-4)=3
//here in this program we are going to find the length of longest arithmatic array 
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
    int ans = 2;
    int curr = 2;
    int dif = a[1]-a[0];
    j=2;
    while(j<n)
    {
        if(dif==a[j]-a[j-1])
        curr++;
        else
        {
            dif = a[j]-a[j-1];
            curr = 2;
        }
        j++;
        ans = max(ans,curr);
    }
    cout<<"length of longest arithmatic subarray is: "<<ans;
    return 0;
}