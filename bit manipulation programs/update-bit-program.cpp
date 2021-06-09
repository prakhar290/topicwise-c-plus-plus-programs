//We have to update a bit at specified position of a given number.
// to update a bit we have to combine both the logic of clear bit and then of set bit
#include<iostream>
using namespace std;
int clearbit(int n,int pos,int value)
{
    int mask = ~(1<<pos);
    //here we have taken the compliment of (1<<pos) as it sets '0' at the given place and '1' on other indexes so when we use '&' operator with 
    //number and the compliment value(mask) then it makes the bit '0' if it has '0' at that position bcz 0&0=0 and also set '0' if it has '1' at that position as (1&0=0).
    int num = n & mask;
    return (num | (value<<pos));// so to update a bit first we need to clear it and then set the bit to the given location
}
int main()
{
    int num,index,value;
    cout<<"enter the number: ";
    cin>>num;
    cout<<"enter the position to set the bit(0/1) at that position: ";
    cin>>index;
    cout<<"enter the bit you want to see as updated bit: ";
    cin>>value;
    cout<<"the new number is: "<<clearbit(num,index,value);
    return 0;
}