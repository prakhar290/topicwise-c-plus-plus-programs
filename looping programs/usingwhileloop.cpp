#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter a number: ";
    cin>>num;
    while(num>0)
    {
        cout<<num<<"\nenter another number: ";
        cin>>num;
    }
    cout<<"\nyou entered a negative number.";
    return 0;
}