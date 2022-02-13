//A number is called rare if all of its digits are divisble by k. Given a number N your task is to check if the given number is
//rare or not. If it is rare return 1 else 0
//for example:-  N = 2468 k = 2  output is 1


#include<iostream>
using namespace std;

int Rare(int num, int k);

int main(){
    int num,k;
    cout<<"enter the number and the divisor to find whether the number is rare of not";
    cin>>num>>k;
    cout<<Rare(num,k);
    return 0;
}

int Rare(int num, int k){
    while(num!=0){
        int rem  = num%10;
        if(rem%k!=0){
        break;
        }
        num = num/10;
    }
    if(num==0){
        return 1;
    }
    else
    return 0;
}