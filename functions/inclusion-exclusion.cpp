//inclusion-exclusion principle is a principle used to find the number of ways you can do a thing.
//this principle is more similar to find the union of any two numbers.
// formula used is: c1+c2-c3 where c1 is the first thing to do, c2 is second thing and c3 denotes the combined work of first and second thing
#include<iostream>
using namespace std;
int count(int n,int a,int b)
{
    int c1 = n/a;
    int c2 = n/b;
    int c3 = n/(a*b);
    int final_count = c1+c2-c3;
    return final_count;
}
int main()
{
    int num,divisor1,divisor2;
    cout<<"enter the number to where you want find the count of divisible number: ";
    cin>>num;
    cout<<"enter the numbers of which you want to find the divisibilty: ";
    cin>>divisor1>>divisor2;
    cout<<"the count of the numbers divisble by "<<divisor1<<" or "<<divisor2<<" is: "<<count(num,divisor1,divisor2);
    return 0;
}