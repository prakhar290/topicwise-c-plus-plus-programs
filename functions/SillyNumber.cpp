/*A number is called silly if it can be represented as the sum of the square of consecutive natural numbers starting from 1.
for a given number N, find the closest silly number. And if more than one answer exists return the minimum one.
for example:-  N = 18 so output will be 14 because  (1*1 + 2*2 + 3*3) = 14*/

#include<iostream>
using namespace std;

bool checkSillyNo(int n){
    int sum = 0;
    for(int i=1;i<n;i++)
    {
        sum += i*i;
        if(sum==n){
            return true;
        }
        else if(sum>n){
            return false;
        }
    }
    return false;
}

int main(){
    int N;
    cout<<"enter any number: ";
    cin>>N;
    int a = N,b = N;
    bool flag1 = false;
    bool flag2 = false;
    if(checkSillyNo(N)){
        cout<<"the silly number is: "<<N;
        return 0;
    }
    while(flag1!=true){
        --a;
        flag1 = checkSillyNo(a);
    }
    while(flag2!=true){
        ++b;
        flag2 = checkSillyNo(b);
    }
    if(b-N>N-a){
        cout<<"the silly number is: "<<a;
    }
    else{
        cout<<"the silly number is: "<<b;
    }
    return 0;
}