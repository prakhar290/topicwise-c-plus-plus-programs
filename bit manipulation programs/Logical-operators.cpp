/*Given two integers a and b, your task is to check following conditions: 
 1. if a<=10 and b>=10 (LOGICAL AND)
 2. Atleast a or b is even (LOGICAL OR)
 3. a is not equal to b (LOGICAL NOT)
if these conditons met and print true for each condition otherwise false */


#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"enter any two numbers to perform logical operations\n";
    cin>>a>>b;
    if(a<=10 && b>=10){
        cout<<"true ";
    }
    else{
        cout<<"false ";
    }
    if(a%2==0 || b%2==0){
        cout<<"true ";
    }
    else{
        cout<<"false ";
    }
    if(a!=b){
        cout<<"true ";
    }
    else{
        cout<<"false ";
    }
    return 0;
}