//hybrid inheritance means combination of other inheritance, for ex- combination of single inehritance and multiple inheritance. 

#include<iostream>
using namespace std;

class A
{
    private:
    int a;
    
    public:
    void funcA()
    {
        cout<<"function called of class A.\n";
    }
};

class B : public A 
{
    private:
    int b;

    public:
    void funcB()
    {
        cout<<"function called of class B.\n";
    }
};

class C  
{
    public:
    void funcC()
    {
        cout<<"function called of class C.\n";
    }
};

class D : public B, public C
{
    public:
    void funcD()
    {
        cout<<"function called of class D.\n";
    }
};

int main()
{
    D obj;
    obj.funcA(); //public member function called of class A using object of class D
    obj.funcB(); //public member function called of class B using object of class D
    obj.funcC(); //public member function called of class C using objevt of class D
    obj.funcD(); //calling its own class function
    return 0;
}