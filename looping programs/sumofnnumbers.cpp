#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"enter the number to where you want add the whole numbers and get the sum: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        sum = sum + i;
    }
    cout<<"\nthe sum of first "<<n<<" whole numbers is: "<<sum;
    return 0;
}