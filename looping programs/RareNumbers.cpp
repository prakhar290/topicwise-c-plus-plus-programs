#include<iostream>
using namespace std;

int Rare(int num, int k);

int main(){
    int num,k;
    cin>>num,k;
    cout<<Rare(num,k);
    return 0;
}

int Rare(int num, int k){
    while(num!=0){
        int rem  = num%10;
        cout<<"rem"<<rem<<" ";
        if(rem%k==0){
           continue;
        }
        else{
            break;
        }
        num = num/10;
        cout<<"num"<<num<<" ";
    }
    cout<<endl;
    if(num==0){
        return 1;
    }
    else
    return 0;
}