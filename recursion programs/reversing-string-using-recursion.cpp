#include<iostream>
#include<string>
using namespace std;
void reverse(string s)
{
    if(s.length()==0)//base condition
    {
        return ;
    }
    reverse(s.substr(1));
    cout<<s[0];
}
int main()
{
    string str;
    cout<<"enter the string you want to get reversed: ";
    cin>>str;
    cout<<"your reversed string is: ";
    reverse(str);
    return 0;
}