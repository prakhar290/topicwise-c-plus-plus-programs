//in multiple inheritance a class inherits multiple classes in it, i.e there are many parent class of a child class. 

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

class B  
{
    private:
    int b;

    public:
    void funcB()
    {
        cout<<"function called of class B.\n";
    }
};

class C : public A, public B //inheriting multiple classes A and B into single class C 
{
    public:
    void funcC()
    {
        cout<<"function called of class C.\n";
    }
};

int main()
{
    C obj;
    //if we try to call private members of any class A and B then it will give us an error. check by removing comments from below line
    //obj.a = 3;
    obj.funcA(); //public member function called of class A using object of class C
    obj.funcB(); //public member function called of class B using object of class C
    obj.funcC();
    return 0;
}