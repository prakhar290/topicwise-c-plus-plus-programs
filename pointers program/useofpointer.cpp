#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int *aptr;//'*' is used to create a pointer variable and the datatype of it should be same as the variable datatype of which we store the address in it.
    aptr = &a;//assigning address of variable to pointer
    cout<<"address of variable: "<<&a<<endl;
    cout<<"address of variable using pointer: "<<aptr<<endl;
    cout<<"value of variable: "<<a<<endl;
    cout<<"value of variable using pointer: "<<*aptr<<endl;
    *aptr = 20;//this means that by using pointer we can access the variable and modify it too. 
    cout<<"now the updated value of variable: "<<a;
    return 0;
} 