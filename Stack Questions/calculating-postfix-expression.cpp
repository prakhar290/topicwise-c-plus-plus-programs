#include<iostream>
#include<stack>
#include<math.h>
using namespace std;

int postfix(string s)
{
    stack<char> st;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            st.push(s[i]-'0');
        }
        else
        {
            int op2 = st.top();
            st.pop();
            int op1 = st.top();
            st.pop();
            switch(s[i])
            {
                case '+':
                st.push(op1+op2);
                break;
                case '-':
                st.push(op1-op2);
                break;
                case '*':
                st.push(op1*op2);
                break;
                case '/':
                st.push(op1/op2);
                break;
                case '^':
                st.push(pow(op1,op2));
                break;
            }
        }
    }
    return st.top();
}

int main()
{
    string s;
    cout<<"enter any postfix expression: ";
    cin>>s;
    cout<<"the answer of your expression is: "<<postfix(s);
    return 0;
}