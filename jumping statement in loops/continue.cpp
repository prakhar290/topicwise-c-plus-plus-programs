#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter the number to where you want to print odd numbers: ";
    cin>>num;
    for(int i=0;i<num;i++)
    {
        if(i%2==0)
        continue;
        else
        cout<<i<<" ";
    }
    //continue statement is used to leave a step and go ahead for the furthur execution of loop
    return 0;
}