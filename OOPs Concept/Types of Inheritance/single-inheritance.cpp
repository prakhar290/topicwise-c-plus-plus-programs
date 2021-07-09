//in single inheritance there is a single parent class and a single child class. 

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

class B : public A  //inheriting class A in class B. here class A is the parent class and class B is child or derived class 
{
    private:
    int b;

    public:
    void funcB()
    {
        cout<<"function called of class B.\n";
    }
};

int main()
{
    B obj;
    obj.funcA(); //function called of class A using object of class B
    obj.funcB();
    return 0;
}