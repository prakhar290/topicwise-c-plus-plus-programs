//sieve of eratosthenes is a different approach to find the prime numbers in a given range 
//in this method we mark the numbers which are the multiple of prime numbers as by this makes we don't need to check every element
//firstly we initialise an array with 0 to and then check for multiple if the multiple is found then we change the value of that index to 1
//doing this helps us in this way that we left with only those numbers whixh are not someone's mulyiple or we can say those are prime
#include<iostream>
using namespace std;
void sieve_prime(int n)
{
    int prime[100]={0};
    for(int i=2;i<=n;i++)
    {
        if(prime[i]==0)
        {
            for(int j=i*i;j<=n;j+=i)
            {
                prime[j]=1;
            }
        }
    }
    cout<<endl;
    cout<<"prime numbers till "<<n<<" are: ";
    for(int i=2;i<=n;i++)
    {
        if(prime[i]==0)//printing only those which are not multiple of any other number
        cout<<i<<" ";
    }
} 
int main()
{
    int num;
    cout<<"enter the number to where you want to search the prime numbers: ";
    cin>>num;
    sieve_prime(num);
    return 0;
}