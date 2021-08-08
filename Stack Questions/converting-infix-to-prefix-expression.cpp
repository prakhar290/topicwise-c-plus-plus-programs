#include<iostream>
#include<stack>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int precedence(char ch)
{
    if(ch=='^')
    {
        return 3;
    }
    if(ch=='*' || ch=='/')
    {
        return 2;
    }
    if(ch=='+' || ch=='-')
    {
        return 1;
    }
    return -1;
}

string infix_to_prefix(string s)
{
    stack<char> st;
    reverse(s.begin(),s.end());
    string ans="";
    for(int i=0;i<s.length();i++)
    {
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
        {
            ans += s[i];
        }
        else if(s[i]==')')
        {
            st.push(s[i]);
        }
        else if(s[i]=='(')
        {
            while(!st.empty() && st.top()!=')')
            {
                ans += st.top();
                st.pop();
            }
            if(!st.empty())
            {
                st.pop();
            }
        }
        else
        {
            while(!st.empty() && precedence(st.top())>precedence(s[i]))
            {
                ans += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while(!st.empty())
    {
        ans += st.top();
        st.pop();
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

int main()
{
    string s;
    cout<<"enter any infix expression to convert it into prefix expression: ";
    cin>>s;
    cout<<"your converted expression is: "<<infix_to_prefix(s);
    return 0;
}