//in this problem we are going to check a paranthesis tsring whether it is balanced or not. for ex- {[()]} this is balanced and
//{[(])} this is not balanced.

#include<iostream>
#include<stack>
using namespace std;

bool isvalid(string s)
{
    stack <char> st;
    bool ans = true;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='(' || s[i]=='[' || s[i]=='{')
        {
            st.push(s[i]);
        }
        else if(s[i]==')')
        {
            if(!st.empty() && st.top()=='(')
            {
                st.pop();
            }
            else
            {
                return false;
            }
        }
        else if(s[i]=='}')
        {
            if(!st.empty() && st.top()=='{')
            {
                st.pop();
            }
            else
            {
                return false;
            }
        }
        else if(s[i]==']')
        {
            if(!st.empty() && st.top()=='[')
            {
                st.pop();
            }
            else
            {
                return false;
            }
        }
    }
    if(!st.empty())
    {
        return false;
    }
    else 
        return true;
}

int main()
{
    string s;
    cout<<"enter any string of paranthesis to check whether it is balanced or not: ";
    cin>>s;
    bool ans = true;
    if(isvalid(s))
    {
        cout<<"your string is balanced.";
    }
    else
    {
        cout<<"your string is not balanced.";
    }
    return 0;
}