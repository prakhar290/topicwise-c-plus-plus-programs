//We are given a number and a position and we have to set 1 at that position.
#include<iostream>
using namespace std;
int setbit(int n,int pos)
{
    int num = n|(1<<pos);//here 1<<pos makes 1 at the only position of which we have to find the bit,  and then doing '|' operation with the number
    return num; //makes the bit '1' if it has '0' at that position bcz 1|0=1 and also set '1' if it has '1' at that position as (1|1=1).
}
int main()
{
    int num,index;
    cout<<"enter the number in binary form: ";
    cin>>num;
    cout<<"enter the position to set the bit '1' at that position: ";
    cin>>index;
    cout<<"the new number is: "<<setbit(num,index);
    return 0;
}