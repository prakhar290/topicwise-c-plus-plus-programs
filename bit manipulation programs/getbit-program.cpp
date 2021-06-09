//We are given a binary number and a position and we have return the bit present on that position
#include<iostream>
using namespace std;
int getbit(int n,int pos)
{ //as indexing in binary numbr is from rigth to left ie.for ex- in 0101 rightmost bit i.e 1 is at index '0' and leftmost bit i.e 0 is at index '3'
    if((n & 1<<pos)!=0)
        return 1;//here 1<<pos makes 1 at place of which we have to find the bit,  and then doing '&' operator gives us the bit as if
    else
        return 0;                       //the bit is 1 then 1&1 gives 1 and if it is 0 then it gives 0&1 i.e 0 
}
int main()
{
    int num,index;
    cout<<"enter the number in binary form: ";
    cin>>num;
    cout<<"enter the position to find the bit at that position: ";
    cin>>index;
    cout<<"the bit at position "<<index<<" is: "<<getbit(num,index);
    return 0;
}
