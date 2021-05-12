#include<iostream>
using namespace std;
int main()
{
    int a[] = {10,20,30};
    cout<<"value of first element of array using array pointer: "<<*a<<endl;//this will looks same as pointer but it is little bit different which you will see below
    int *ptr;
    ptr = a;//here i didn't use &a because 'a' already holds the address of the first element of array so we only use 'a'
    //now printing whole array using pointer
    cout<<"now printing whole array using pointer: ";
    for(int i=0;i<3;i++)
    {
        cout<<*ptr<<" ";
        ptr++;//here increment happens but not by value 1 it will increment the pointer accoridng to the size of the datatype here it is int so it'll incremented by 4
    }
    //now if we want to use 'a' as pointer that is like '*a' then we will get an error because
    // '*a' is a constant pointer which holds only the adrress of the first index of the array
    cout<<"\n\n printing array using array pointer: ";  
    for(int i=0;i<3;i++)
    {
        //cout<<*a<<endl; this will get executed bt it only gives the value of first index only
        //*a++;  here if you remove the comment sign then you can see the error coming out.
        //now to print array using pointer 'a' we can do one thing shown below: 
        cout<<*(a+i)<<" ";// here we use i only because the array pointer is an index pointer which holds the index of the first element so 
                          //incrementing the array pointer by i gives the values to next index of the array. 
    }
    return 0;
}