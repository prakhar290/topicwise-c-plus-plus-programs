#include<bits/stdc++.h>
using namespace std;
 int main()
 {
    string s;
    cout<<"enter the string: ";
    cin>>s;
    string ans ="";
    for(int i=0;i<s.size();i++)
    {
        bool flag = true;
        for(int j=0;j<s.size();j++)
        {
            if(s[i]==s[j] && i!=j)
            {
                flag = false;
                break;
            }
        }
        if(flag==true)
        {
            ans += s[i];
        }
    }
    cout<<"the second non-repeating character is: "<<ans[1];
    return 0;
 }