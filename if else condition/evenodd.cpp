#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter a number to check whether it is even or odd: ";
    cin>>num;
    if(num%2==0)
    {
        cout<<"\nentered number is even.";
    }
    else
    {
        cout<<"\nentered number is odd.";
    }
    return 0;
}