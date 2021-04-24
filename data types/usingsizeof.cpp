#include<iostream>
using namespace std;
int main()
{
    int a = 5;
    float b = 5.05;
    char c = 'a';
    bool bo = 1;
    //by using sizeof operator we can find the size of the datatype of which we have created the variable
    cout<<"the size of int datatype variable a is: "<<sizeof(a)<<endl;
    cout<<"the size of float datatype variable b is: "<<sizeof(b)<<endl;
    cout<<"the size of char datatype variable c is: "<<sizeof(c)<<endl;
    cout<<"the size of bool datatype variable bo is: "<<sizeof(bo)<<endl;
    return 0;
}