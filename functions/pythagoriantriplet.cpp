#include<iostream>
using namespace std;
bool triplet(int x, int y,int z)
{
    int a,b,c;
    a = max(x,max(y,z));
    if(a==x)
    {
        b=y;
        c=z;
    }
    else if(a==y)
    {
        b=x;
        c=z;
    }
    else
    {
        b=x;
        c=y;
    }
    if(a*a == (b*b + c*c))
    {
        return true;
    }
    else
    return false;
}
int main()
{
    int a,b,c;
    cout<<"enter three numbers to check whether it is pythagorian triplet or not: ";
    cin>>a>>b>>c;
    if(triplet(a,b,c))
    {
        cout<<"pythagorian triplet.";
    }
    else 
    cout<<"not a pythagorian triplet.";
    return 0;
}