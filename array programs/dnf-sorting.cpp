//dnf sort is also known as (0,1,2) sort or dutch national flag sort. As the array consist only 0's, 1's and 2's as element of array
//In this sroting technique we have three pointers as low mid and high which represents four regions first region is till low which
//contains 0's as its element and from low to mid 1's are present and from mid to high 2's are there as the element and we got the 
//sorted array by following the given rules :-
//1. if array[mid]=0 then swap array[mid] to array[low] and mid++, low++.
//2. if array[mid]=1 then mid++
//3. if arrya[mid]=2 then swap array[mid] to array[high] and high--

#include<iostream>
using namespace std;
void dnfsort(int a[],int n)
{
    int low = 0;
    int mid = 0;
    int high = n-1;
    for(int i=0;i<n;i++)
    {
        if(a[mid]==0)
        {
            swap(a[mid],a[low]); //rule point 1
            mid++;
            low++;
        }
        else if(a[mid]==1)       //rule point 2
        {
            mid++;
        }
        else
        {
            swap(a[mid],a[high]); //rule point 3
            high--;
        }
    }
}
int main()
{
    int a[100];
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    cout<<"\n enter the elements of array from (0,1,2): ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"your sorted array using dnf sort technique is:\n";
    dnfsort(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}