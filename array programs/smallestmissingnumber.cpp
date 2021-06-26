//you are given an array a[] of n integers including 0. the task is to find the smallest positive number missing from the array.
//sample input: n =6 a[]={0,-9,1,3,-4,4}
//sample output: 2
#include<iostream>
using namespace std;
int main()
{
    int a[100];
    int n,i,j,sm=0;
    cout<<"enter the size of array: ";
    cin>>n;
    cout<<"enter the elements: ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        char c='f';
        for(j=0;j<n;j++)
        {
            //cout<<j<<"  ";
            if(a[j]==sm)
            {
                c = 'y';
                break;
            }
            
        }
        if(c!='y')
        {
            cout<<sm;
            return 0;
        }
        sm++;
    }
    return 0;
}
