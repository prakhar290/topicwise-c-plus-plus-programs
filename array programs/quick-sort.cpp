//Quick sort is a process of sorting in which we choose any element and put it in right position i.e the elements which are smaller than
//selected element they should be moved to it's left and those who are greater than it moved to it's right. This technique also uses 
//divide and conquor method as it is not necessary that all the elements which are moved to left and right of the selected number are 
//sorted so we divide it into parts first will have all the smaller elements before the selected element and second part will have 
//elements that are greater than the selected element.
//for ex- given array be like {6 3 9 5 2 8 7} the output should be the sorted given array i.e {2 3 5 6 7 8 9}

#include<iostream>
using namespace std;
void swap(int a[],int i,int j)
{
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}
int partition(int a[],int beg,int end)
{
    int element = a[end];//selecting an element
    int i=beg-1; // this will give us the last element which is smaller than our selected element
    for(int j=beg;j<end;j++)
    {
        if(a[j]<element)
        {
            i++;
            swap(a,i,j);//this will move smaller elements to left of the selected element
        }
    } 
    swap(a,i+1,end); // this will move the selected element just after the last smaller element than it in the whole array
    return i+1;
}
void quicksort(int a[],int beg,int end)
{
    if(beg<end)
    {
        int index = partition(a,beg,end);
        quicksort(a,beg,index-1);
        quicksort(a,index+1,end);
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
    quicksort(a,0,n-1);
    cout<<"your array after quick sort is: ";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
