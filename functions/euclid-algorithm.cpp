//Euclid Algorithm is used to find the GCD/HCF of any two numbers, bys finding the remainder till we get 0 as remainder.
#include<iostream>
using namespace std;
int find_hcf(int a,int b)
{
    int rem;
    while(rem!=0)
    {
        rem = a%b;
        a = b;
        b = rem;
    }
    return a;
}
int main()
{
    int num1,num2;
    cout<<"enter the numbers to find their HCF/GCD: ";
    cin>>num1>>num2;
    cout<<"the HCF of "<<num1<<" and "<<num2<<" is: "<<find_hcf(num1,num2);
    return 0;
}