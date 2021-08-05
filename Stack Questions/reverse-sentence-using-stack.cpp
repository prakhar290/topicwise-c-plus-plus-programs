// suppose we have a sentence : hi, how are you? now we want o reverse this sentence as : you? are how hi, 
//for stack we have a pre defined stl which contains all operation done in it. so to use it we have add the libray 'stack' in code

#include<iostream>
#include<stack>
using namespace std;

void reverse_sentence(string s)
{
    stack <string> st; // declaring a stack of string datatype
    for(int i=0;i<s.length();i++) //traversing the given string to push the words into our stack 
    {
        string word = "";
        while(s[i]!=' ' && i<s.length())
        {
            word += s[i];
            i++;
        }
        st.push(word);
    } 
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}

int main()
{
    string s = "hi, how are you?";
    cout<<"your sentence is:\n"<<s;
    cout<<"your reverse sentence is:\n";
    reverse_sentence(s);
    return 0;
}