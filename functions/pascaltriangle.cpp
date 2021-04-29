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
int calcncr(int n,int r)
{
    int factn,factr,factdif;
    factn = factorial(n);
    factr = factorial(r);
    factdif = factorial(n-r);
    return factn/(factdif*factr);
}
int main()
{
    int row,i,j;
    cout<<"enter the values of rows to print pascal triangle: ";
    cin>>row;
    for(i=0;i<row;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<calcncr(i,j)<<" ";
        }
        cout<<"\n";
    }
    //if the input is 5 the pattern comes out as:
    //1 
    //1 1
    //1 2 1
    //1 3 3 1
    //1 4 6 4 1
    //the values which are printing in the pattern are the binomial coefficients i.e it uses ncr method to get the values where n=i and r=j. 
    return 0;
}