#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"enter what you want to do: ";
    cin>>ch;
    if((ch>='a' || ch>='A') && (ch<='z' || ch<='Z'))
    cout<<"\ninput is a character.";
    else
    cout<<"\ninput is not a character.";
    return 0;
}
