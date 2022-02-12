#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int count = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i+j==n){
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}