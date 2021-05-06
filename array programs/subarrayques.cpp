//given an unsorted array A of size N of non-negative integer, find a continuous subarray whcih adds to given number S.
//sample input: N=5, S=12 nad A[] = {1,2,3,7,5}
//sample output: 2,4
//expalnation: the sum of elements from 2nd position to 4th position is 12
#include<iostream>
using namespace std;
int main()
{
    int n,s,i;
    cout<<"enter the size of array: ";
    cin>>n;
    int a[n],j;
    cout<<"enter the elements: ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter the sum value to compare with: ";
    cin>>s;
    for(i=0;i<n;i++)
    {
        int sum=0;
        for(j=i;j<n;j++)
        {
            sum = sum + a[j];
            if(sum==s)
            {
                break;
            }
        }
        if(sum==s)
        break;
    }
    cout<<i+1<<" "<<j+1;
    return 0;
}
