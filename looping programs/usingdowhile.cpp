#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter a number: ";
    cin>>num;
    do
    {
        cout<<num<<"\nenter another number: ";
        cin>>num;
    }
    while(num>0);
    cout<<"\nyou entered a negative number.";
    //the only difference b/w while and dowhile is that do while executes atleast one time before checking the condition is true,
    //on the other hand while doesnot execute until the condition is true.
    return 0;
}