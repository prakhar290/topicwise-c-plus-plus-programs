#include<bits/stdc++.h>

using namespace std;
int hexadecimaltodecimal(string n)
{
    int sum=0,rem,count=0;
    int len = n.size();
    for(int i=(len-1);i>=0;i--)
    {
        if(n[i]>='0' && n[i]<='9')
        sum = sum + int(n[i]-'0')*pow(16,count);
        else if(n[i]>='A' && n[i]<='F')
        sum = sum + pow(16,count)*(int(n[i]-'A') + 10); 
        count++;
    }
    return sum;
}
int main()
{
    string num;
    cout<<"enter a hexadecimal number to convert it into decimal: ";
    cin>>num;
    cout<<"the decimal conversion of "<<num<<" is: "<<hexadecimaltodecimal(num);
    return 0;
}