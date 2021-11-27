//Anagrams are those which have the same characters, the order can be same or dfferent

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cout<<"enter a string: ";
    cin>>s1;
    cout<<"enter anothr string: ";
    cin>>s2;
    for(int i=0;i<s1.size();i++)
    {
        s1[i]=tolower(s1[i]);
        s2[i]=tolower(s2[i]);
    }
    int len1 = s1.size();
    int len2 = s2.size();
    if(len1!=len2)
    {
        cout<<"strings not anagrams";
        return 0;
    }
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    int i=0;
    for(i=0;i<s1.size();i++)
    {
        if(s1[i]!=s2[i])
        {
            break;
        }
    }
    if(i!=s1.size())
    {
        cout<<"strings are not anagrams";
    }
    else{
        cout<<"strings are anagrams";
    }
    return 0;
}