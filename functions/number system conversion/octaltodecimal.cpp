#include<iostream>
#include<cmath>
using namespace std;
int octaltodecimal(int n)
{
    int sum=0,rem,count=0;
    while(n>0)
    {
        rem = n%10;
        sum = sum + rem*pow(8,count);
        count++;
        n = n/10;
    }
    return sum;
}
int main()
{
    int num;
    cout<<"enter a octal number to convert it into decimal: ";
    cin>>num;
    cout<<"the decimal conversion of "<<num<<" is: "<<octaltodecimal(num);
    return 0;
}