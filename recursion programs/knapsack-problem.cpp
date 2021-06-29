//we are given n number of items,an array as weight of items, an array representing value of item and the weight of a knapsack.
//put n items with given weight and value in a knapsack of capacity W to get the maximum total value in the knapsack.
#include<iostream>
using namespace std;
int knapsack(int wt[],int value[],int W,int n)
{
    if(n==0 || W==0)
    {
        return 0;
    }
    if(wt[n-1]>W)
    {
        return knapsack(wt,value,W,n-1);
    }
    return max(knapsack(wt,value,W,n-1),knapsack(wt,value,W-wt[n-1],n-1)+value[n-1]);
}
int main()
{
    
    int wt[100];
    int value[100];
    int n;
    cout<<"enter the number of items: ";
    cin>>n;
    cout<<"enter the weight of each item:\n";
    for(int i=0;i<n;i++)
    {
        cin>>wt[i];
    }
    cout<<"enter the value of each item:\n";
    for(int i=0;i<n;i++)
    {
        cin>>value[i];
    }
    int W;
    cout<<"enter the capacity of knapsack: ";
    cin>>W;
    cout<<"the maximum value of the knapsack after putting items in it is: ";
    cout<<knapsack(wt,value,W,n);
    return 0;
}
