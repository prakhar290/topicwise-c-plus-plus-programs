#include<iostream>
using namespace std;

bool check(int arr[],int n)
{
    if(n==1)
    {
        return true;
    }
    if(arr[0]<arr[1] && check(arr+1,n-1))
    {
        return true;
    }
    else 
    return false;
}
int main()
{
    int a[5]={1,2,9,4,5};
    bool flag = check(a,5);
    if(flag==true)
    cout<<"the array is sorted.";
    else
    cout<<"array is not sorted.";
    return 0;
}