//given a 2xn board and tiles of size 2X1, count the number of ways to tile the given board using given tiles.
#include<iostream>
using namespace std;
int tiling(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    return tiling(n-1) + tiling(n-2);
}

int main()
{
    int n;
    cout<<"enter the value of n in (2xn): ";
    cin>>n;
    cout<<"the total number of ways to tile the given board of (2x"<<n<<") using the given tiles of (2x1) are: ";
    cout<<tiling(n);
    return 0;
}