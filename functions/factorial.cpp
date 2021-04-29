#include<iostream>
using namespace std;
int factorial(int num)
{
    int fact=1;
    while(num>1)
    {
        fact = fact * num;
        num--;
    }
    return fact;

}
int main()
{
    int n;
    cout<<"enter the number to find its factorial: ";
    cin>>n;
    cout<<"the factorial of "<<n<<" is: "<<factorial(n);
    return 0;
}