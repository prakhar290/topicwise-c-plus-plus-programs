#include<iostream>
#include<stack>
using namespace std;

void reverse(stack<int> st)
{
    stack<int> s2;
    while(!st.empty())
    {
        s2.push(st.top());
        st.pop();
    }
    cout<<"your reversed stack is:\n";
    while(!s2.empty())
    {
        cout<<s2.top()<<" ";
        s2.pop();
    }
    cout<<endl;
}

void display(stack<int> st)
{
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}

int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout<<"your stack is:\n";
    display(st);
    reverse(st);
    return 0;
}