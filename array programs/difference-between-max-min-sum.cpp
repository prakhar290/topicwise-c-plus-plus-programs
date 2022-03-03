/*You are given an array A of size N and a positive number M. you have to find the difference between maximum sum and minimum sum
by using exactly the M elements from the given array.
for example: 
input:  N = 8
        A[] = 5 1 7 8 7 8 7 8
        M = 3
output:  11 
Explanation:  as if you sort the array you get  [1,5,7,7,7,8,8,8] and now M is 3 so maxsum will be  8+8+8=  24 and minsum will be
1+5+7 = 13 so the difference is: 24-13 = 11*/





#include<bits/stdc++.h>
using namespace std;

int minMax(int N,int M, int A[]){
    sort(A,A+N);
    int minsum = 0;
    int maxsum = 0;
    for(int i=0;i<M;i++){
        minsum += A[i];
        maxsum += A[N-i-1];
    }
    return maxsum-minsum;
}

int main(){
    int m,n,a[100];
    cout<<"enter the size of the array: ";
    cin>>n;
    cout<<"enter the elements of the array: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter of how many elements min and max sum difference you want: ";
    cin>>m;
    cout<<"the difference is: "<<minMax(n,m,a);
    return 0;
}