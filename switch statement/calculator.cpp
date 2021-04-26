#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter two numbers: ";
    cin>>a>>b;
    char op;
    cout<<"enter the opertion: ";
    cin>>op;
    switch(op)
    {
        case '+':
        cout<<"sum of two numbers is: "<<a+b;
        break;
        case '-':
        cout<<"difference of two number is: "<<a-b;
        break;
        case '*':
        cout<<"multiplication of two number is: "<<a*b;
        break;
        case '/':
        cout<<"division of two number is: "<<a/b;
        break;
        default:
        cout<<"wrong operation";
        break;
    }
    return 0;
}