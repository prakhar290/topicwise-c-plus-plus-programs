//function overloading is a type of complie time polymorphism, in this ther are more than one function with same name but with different
//number of arguements or different types of arguement.

#include<iostream>
using namespace std;

class function
{
    public:
    void sum(int a,int b)
    {
        cout<<"\nthis is an int type addition function.\n sum is: ";
        cout<<a+b;
    }
    void sum(double a,double b)
    {
        cout<<"\nthis is a double type addition function.\n sum is: ";
        cout<<a+b;
    }
    void sum(float a)
    {
        cout<<"\nthis is a void float type addition function.\n sum is: ";
        cout<<a;
    }
};

int main()
{
    function obj;
    obj.sum(2,3);
    obj.sum(2.2);
    obj.sum(2.1,4.2);
    return 0;
}