#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int *aptr;
    aptr = &a;
    int **bptr;//this is pointer tot pointer or we can say it double pointer 
    bptr = &aptr;// now this double pointer stores the address of aptr 
    cout<<"address of variable: "<<&a<<endl;
    cout<<"address of variable using pointer: "<<aptr<<endl;
    cout<<"address of \'aptr\' pointer: "<<&aptr<<endl;
    cout<<"address of \'aptr\' pointer using double pointer : "<<bptr<<endl;
    cout<<"address of variable using double pointer: "<<*bptr<<endl;
    cout<<"value of variable \'a\': "<<a<<endl;
    cout<<"accessing variable using pointer: "<<*aptr<<endl;
    cout<<"accessing variable using double pointer: "<<**bptr<<endl;
    //now we can also modify the variable value using double pointer as shown below:
    **bptr = 20;
    cout<<"the changed value of the variable: "<<a;
    return 0;
}