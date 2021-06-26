#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    
    int a[100];
    int n;
    cout<<"enter the size: ";
    cin>>n;
    cout<<"enter elements: ";
    for(int i=0;i<n;i++)
    { 
        cin>>a[i];
    }
    int minno=INT_MAX;
    int maxno=INT_MIN;
    for(int i=0;i<n;i++)
    {
        minno = min(minno,a[i]);
        maxno = max(maxno,a[i]);
    }
    cout<<"minimum number of the array is: "<<minno;
    cout<<"\nmaximum number of the array is: "<<maxno;
    return 0;
}
