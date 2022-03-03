/*You are given a string S, and you have to find the count of the uppercase characters in the whole string.
for example: 
input: S = PaSSworD
output:  4 as P, S, S, D are uppercase characters*/



#include<bits/stdc++.h>
using namespace std;

int upperCase(string S){
    int count = 0;
    for(int i=0;S[i]!='\0';i++){
        if(S[i]>=65 && S[i]<=90){
            count++;
        }
    }
    return count;
}

int main(){
    string s;
    cout<<"enter the string to find the count of uupercase characters: ";
    cin>>s;
    cout<<"the count of uupercase characters is: "<<upperCase(s);
    return 0;
}