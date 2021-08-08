/* to convert a infix expression into prefix we follow the same procedure as of converting an expression into postfix. but before
that we will first reverse the given string to follow the algorithm. 
1. if we found an operand then we store it in our answer string.
2. if a closing bracket ')' is found then push it to the stack
3. if a opening bracket '(' is found then store the element and then pop it till the closing bracket is found and pop it also
4. if an operator is found then store the element and pop it till the operator with less precedence is found and push it */

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
