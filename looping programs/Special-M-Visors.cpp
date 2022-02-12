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
        cout<<i<<" ";
    }
    if(count==m){
        cout<<"Yes";
    }
    else{
        cout<<"NO";
    }
    return 0;
}