#include<iostream>
using namespace std;
int add(int num1,int num2)
{
    int sum = num1 + num2;
    return sum;
}
int main()
{
    int a,b;
    cout<<"enter two values to find the sum: ";
    cin>>a>>b;
    cout<<"the sum of two numbers is: "<<add(a,b);
    return 0;
}