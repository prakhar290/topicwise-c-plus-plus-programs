/* to convert a infix expression into prefix we follow the same procedure as of converting an expression into postfix. but before
that we will first reverse the given string to follow the algorithm. 
1. if we found an operand then we store it in our answer string.
2. if a closing bracket ')' is found then push it to the stack
3. if a opening bracket '(' is found then store the element and then pop it till the closing bracket is found and pop it also
4. if an operator is found then store the element and pop it till the operator with less precedence is found and push it
5. in the end reverse the resultant string and give the output*/

#include<iostream>
#include<stack>
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
