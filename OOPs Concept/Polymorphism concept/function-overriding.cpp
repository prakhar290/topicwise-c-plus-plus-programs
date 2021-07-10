//function overriding is a type runtime polymorphism, in this there is a function with same in both the derived class and base class
//so when object is created and the function is called the object gets confused that which function it should execute so to resolve this 
//we use the 'virtual' keyword before the name of that function wich we don't want to get executed. mostly it is applied to the function
//of base class.

#include<iostream>
using namespace std;

class base
{
    public:
    virtual void print()
    {
        cout<<"this is base class print.\n";
    }
    void display()
    {
        cout<<"this is base class display.\n";
    }
};

class derived : public base
{
    public:
    void print()
    {
        cout<<"this is derived class print.\n";
    }
    void display()
    {
        cout<<"this is derived class display.\n";
    }
};

int main()
{
    base *baseptr; //this pointer is created because we want the function to get override at runtime 
    derived obj;
    baseptr = &obj;
    baseptr->print(); //baseptr is a pointer so we have to use '->' in place of dot(.) operator to call the function
    baseptr->display();
    //check the output by removing the virtual keyword fromt he base class and see the difference
    return 0;
}