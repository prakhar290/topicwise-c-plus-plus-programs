//Given two positive integers N and M. The task is to check whether N is a special-M-visor or not.
//special-M-visor:- a number is called special-m-visor, if it has exactly M even divisors for a given N.
//for example:- N = 4 and M = 2  then output is "Yes" bcz 2 and 4 are only even divisors of N and count is equal to M



#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int count = 0;
    for(int i=2;i<=n;i=i+2)
    {
        if(n%i==0){
            count++;
        }
    }
    if(count==m){
        cout<<"Yes";
    }
    else{
        cout<<"NO";
    }
    return 0;
}