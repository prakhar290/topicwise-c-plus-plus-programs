#include<iostream>
using namespace std;
int main()
{
    int array1[5] = {1,2,3,4,5};//declaring and initializing at the same time
    int array2[3];//only declartion of array
    array2[0]=1;//initailizing using index numbers. Remember index number always start from 0
    array2[1]=2;
    array2[2]=3;
    //now if we want to get initialization from user we use looping.
    
    int array3[100];
    int size;
    cout<<"enter the size of array you want: ";
    cin>>size;
    cout<<"enetr the elements of array: ";
    for(int i=0;i<size;i++)
    {
        cin>>array3[i];
    }
    cout<<"your array is: ";
    for(int i=0;i<size;i++)
    {
        cout<<array3[i]<<" ";
    }    
    return 0;
}
