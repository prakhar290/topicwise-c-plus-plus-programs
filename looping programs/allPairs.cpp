//Given an integer N, find all possible pairs of A and B, such that A+B = N and A and b ar both natural numbers
//for example- N = 5 so output is 4 as (1,4),(2,3),(3,2),(4,1) gives the same number after addition


#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int count = 0;
    for(int i=0;i<=n/2;i++)
    {
        for(int j=n/2;j<n;j++)
        {
            if(i+j==n){
                count++;
            }
        }
    }
    if(n%2==0){
        cout<<2*count-1;
    }
    else
    {
        cout<<2*count;
    }
    return 0;
}