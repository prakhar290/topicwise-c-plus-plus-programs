#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"enter the size of  character array: ";
    cin>>n;
    char a[n+1];
    cout<<"enter your character array: ";
    cin>>a;
    bool check = false;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==a[n-1-i])
        {
            check = true;
            continue;
        }
        else
        {
            cout<<"your character array is not palindorme.";
            return 0;
        }
    }
    cout<<"your array is a palindromic array.";
    return 0;
}