/*you are given digits string contained in a character array. Each digits is written using dashes and the dashes used to write the 
digit are as follows: 
0 - 0
1 - 2
2 - 5
3 - 5
4 - 4
5 - 5
6 - 6
7 - 4
8 - 7
9 - 6

now you have the find the total number of dashes used in writing the whole digits string.
for example: 
input : Digits[] = {123456}
output is : 27 */ 



#include<bits/stdc++.h>
using namespace std;

int NumberofDashes(char Digits[]){
int total_dashes = 0;
for(int i=0;Digits[i]!='\0';i++){
    if(Digits[i]==0+'0'){
        total_dashes += 6;
    }
    else if(Digits[i]==1+'0'){
        total_dashes += 2;
    }
    else if(Digits[i]==2+'0'){
        total_dashes += 5;
    }
    else if(Digits[i]==3+'0'){
        total_dashes += 5;
    }
    else if(Digits[i]==4+'0'){
        total_dashes += 4;
    }
    else if(Digits[i]==5+'0'){
        total_dashes += 5;
    }
    else if(Digits[i]==6+'0'){
        total_dashes += 6;
    }
    else if(Digits[i]==7+'0'){
        total_dashes += 4;
    }
    else if(Digits[i]==8+'0'){
        total_dashes += 7;
    }
    else if(Digits[i]==9+'0'){
        total_dashes += 6;
    }
}
return total_dashes;
}

int main(){
    char digits[100];
    cout<<"enter your digit string: ";
    cin>>digits;
    cout<<"the number of dashes are: "<<NumberofDashes(digits);
    return 0;
}