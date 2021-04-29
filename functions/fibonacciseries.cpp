#include<iostream>
using namespace std;
void fibonacci(int size)
{
    int a=0,b=1,c;
    cout<<"the series is: ";
    cout<<a<<" "<<b<<" ";
    for(int i=2;i<size;i++)
    {
        c = a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
}
int main()
{
    int n;
    cout<<"enter the size of fibonacci series you want: ";
    cin>>n;
    fibonacci(n);
    return 0;

}