//printing all the permutation combination of the string using recursion.  
//for ex- string is "abc" so the permutation combination be: abc, acb, bac, bca, cab, cba
#include<iostream>
using namespace std;
void permutation(string s,string ans)
{
    if(s.length()==0)
    {
        cout<<ans<<" ";
        return;
    }
    for(int i=0;i<s.length();i++)
    {
        char ch = s[i];
        string s2 = s.substr(0,i) + s.substr(i+1);
        permutation(s2,ans+ch);
    }
}
int main()
{
    string str;
    cout<<"enter the string to find its permutative combination: ";
    cin>>str;
    cout<<"permutative combinations of your string are:\n";
    permutation(str," ");
    return 0;
}