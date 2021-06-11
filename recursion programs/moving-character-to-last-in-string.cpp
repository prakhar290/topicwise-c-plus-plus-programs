//sending all occurence of particular character in the last of string. for ex-  string is xxxxabcds so result should be abcdsxxxx
#include<iostream>
#include<string>
using namespace std;
string change(string s)
{
    if(s.length()==0)
    {
        return "";
    }
    char ch = s[0];
    string newstring = change(s.substr(1));
    if(ch=='x')
    {
        return (newstring+ch);
    }
    return ch+newstring;
} 
int main()
{
    string str;
    cout<<"enter your string: ";
    cin>>str;
    cout<<"your string after changes: "<<change(str);
    return 0;
}