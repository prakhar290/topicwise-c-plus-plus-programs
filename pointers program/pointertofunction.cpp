#include<iostream>
using namespace std;
void increment(int *num)
{
    (*num)++;
}
void decrement(int *a)
{
    (*a)--;
}
int main()
{
    int a=2;
    int *aptr;
    aptr = &a;
    cout<<a<<endl;
    (*aptr)++;
    cout<<"value after incrementing the variable using pointer: "<<*aptr<<endl;
    increment(aptr);
    cout<<"value after calling the increment function by passing value: "<<*aptr<<endl;
    //you will see the same value as assigned before because in the function we just passed the value of our variable so it does not have any
    //access to our variable to modify its value so even after calling the function the value of 'a' does not get increased

    //now to access the variable through the function we need to pass the address of the variable instead of its value
    decrement(&a);
    cout<<"value after calling the decrement function by passing the address of variable: "<<a; 
    return 0;
}