#include<iostream>
using namespace std;
void sieve_primefactor(int n)
{
    int prime[100]={0};
    for(int i=2;i<=n;i++)
    {
        prime[i]=i;//giving every number its factor
    }
    for(int i=2;i<=n;i++)
    {
        if(prime[i]==i)
        {
            for(int j=i*i;j<=n;j+=i)
            {
                if(prime[j]==j)//checking again that it have factor or not
                {
                    prime[j]=i;//assigning the smallest prime factor of the number 
                }
            }
        }
    }
    cout<<endl;
    cout<<"prime factors are: ";
    while(n!=1)
    {
        cout<<prime[n]<<" ";
        n = n/prime[n];
    }

} 
int main()
{
    int num;
    cout<<"enter the number to where you want to find the prime factors: ";
    cin>>num;
    sieve_primefactor(num);
    return 0;
}