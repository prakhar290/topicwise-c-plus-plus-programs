//removing all duplicates characters in astring using recursion. for ex- string is like aaaabbbcccdd so the output should be abcd
#include<iostream>
using namespace std;
string remove(string s)
{
    if(s.length()==0)
    {
        return "";
    }
    char ch=s[0];
    string newstring = remove(s.substr(1));
    if(ch==newstring[0])
    {
        return newstring;
    }
    else
    return (ch+newstring);
}
int main()
{
    string str;
    cout<<"enter the string: ";
    cin>>str;
    cout<<"your string after removing all duplicates is: ";
    string newstr = remove(str);
    cout<<newstr;
    return 0;
}