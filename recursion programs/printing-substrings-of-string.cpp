#include<iostream>
using namespace std;
void substring(string s,string ans)
{
    if(s.length()==0)
    {
        cout<<ans<<endl;
        return ;
    }
    char ch = s[0];
    string s2 = s.substr(1);
    substring(s2,ans);
    substring(s2,ans+ch);
}
int main()
{
    string s;
    cout<<"enter the string: ";
    cin>>s;
    cout<<"all substrings of your string are: ";
    substring(s," ");
    return 0;
}