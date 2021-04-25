#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter the number to where you want to print the numbers: ";
    cin>>num;
    for(int i=0;i<num;i++)
    {
        if(i==6)
        break;
        cout<<i<<" ";
    }
    cout<<"\nthe number stops printing after 6 because we have used break statement in the loop.";
    //break statement is used to take exit from the working loop and stop its furthur execution. 
    return 0;
}
