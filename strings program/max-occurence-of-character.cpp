/* you are given a string and you have to find the element having maximum number of occurence in the string, if there are more than one 
element then you will return "0" as output.
for ex: string = aabbccc,  output = c
string = aabb,   output = 0*/


#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
string character(string s)
{
    int len = s.size();
    int more = 0;
    string ans;
    int count[26];
    for(int i=0;i<26;i++)
    {
        count[i] = 0;
    }
    for(int i=0;i<len;i++)
    {
        count[s[i]-'a']++;
    }
    int maxc = -1;
    for(int i=0;i<len;i++)
    {
        if(maxc<count[s[i]-'a'])
        {
            maxc = count[s[i]-'a'];
            ans = s[i];
        }
    }
    sort(count,count+26);
    if(count[25]==count[24])
    {
        return to_string(0);
    }
    else
    return ans;
}
 int main()
 {
     string s;
     cout<<"enter any string: ";
     cin>>s;
     cout<<"the element which occur the most number of time is: "<<character(s);
     return 0;
 }