//Question:- we have to print all possible words that can be formed from the digits of keypad phone. 
//i.e we are given a string in which we are having the numbers of which we have to make words combination. for example:-
// we have given s = "23" so at digit 2 in keypad phone we have letters {a b c} and at 3 we have {d e f} so the words form from the combination
// of 2 and 3 digits letter are {ad,ae,af,bd,be,bf,cd,ce,cf}.

#include<iostream>
using namespace std;
string keypadarray[] = {".", "/", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void combination(string s,string ans)
{
    if(s.length()==0)
    {
        cout<<ans<<endl;
        return ;
    }
    char ch = s[0]; //this will take the first digit and then we find the corresponding string to that digit
    string code = keypadarray[ch-'0']; //assigning corresponding string to digit
    string ros = s.substr(1); //this will reduce the length of string for furthur calling of the function 
    for(int i=0;i<code.length();i++)
    {
        combination(ros,ans+code[i]);
    }
}

int main()
{
    string s;
    cout<<"enter the digits string of which you want to find the words combination: ";
    cin>>s;
    cout<<"your word combinations are:\n";
    combination(s,"");
    return 0;
}