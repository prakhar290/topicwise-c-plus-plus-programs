#include<iostream>
#include<stack>
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
    return -1; //this will be for bracket
}

string infix_to_postfix(string s)
{
    stack <char> st;
    string s2;
    for(int i=0;i<s.size();i++)
    {
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
        {
            s2 += s[i];
        }
        else if(s[i]=='(')
        {
            st.push(s[i]);
        }
        else if(s[i]==')')
        {
            while(!st.empty() && st.top()!='(')
            {
                s2 += st.top();
                st.pop();
            }
            if(!st.empty()) //removing the opening bracket
            {
                st.pop();
            }
        }
        else
        {
            while(!st.empty() && precedence(st.top())>precedence(s[i]))
            {
                s2 += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while(!st.empty())
    {
        s2 += st.top();
        st.pop();
    }
    return s2;
}

int main()
{
    string s;
    cout<<"enter any expression to convert it into postfix expression: ";
    cin>>s;
    cout<<"your postfix expression is: "<<infix_to_postfix(s);
    return 0;
}