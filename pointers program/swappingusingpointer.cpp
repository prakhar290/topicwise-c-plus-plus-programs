#include<iostream >
using namespace std;
void swap(int *a,int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int num1,num2;
    int *ptr1,*ptr2;
    cout<<"enter the two numbers to get swapped out: ";
    cin>>num1>>num2;
    ptr1 = &num1;
    ptr2 = &num2;
    cout<<"numbers before getting swapped: "<<num1<<" "<<num2<<endl;
    swap(ptr1,ptr2); // call by reference method
    cout<<"numbers after getting swapped: "<<num1<<" "<<num2;
    return 0;
}