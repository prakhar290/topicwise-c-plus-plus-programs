#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s = "6547392";
    cout<<"the biggest number that can be formed from the numeric string "<<s<<" is: ";
    sort(s.begin(),s.end(),greater<int>());// to sort the string in decreasing order we used greater<datatype>().
    cout<<s;
    return 0;
}