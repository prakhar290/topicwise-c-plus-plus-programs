// printing numbers in increment and decrement order using recursion
#include<iostream>
using namespace std;
void dec(int n)
{
    if(n==0)
    return;
    cout<<n<<" ";
    dec(n-1);
}
void inc(int n)
{
    if(n==0)
    return;
    inc(n-1);
    cout<<n<<" ";
}
int main()
{
    int num;
    cout<<"enter the number to where you want to print numbers in ascending and descending order: ";
    cin>>num;
    cout<<"numbers in descending order are: ";
    dec(num);
    cout<<endl;
    cout<<"numbers in ascending order are: ";
    inc(num);
    return 0;
}