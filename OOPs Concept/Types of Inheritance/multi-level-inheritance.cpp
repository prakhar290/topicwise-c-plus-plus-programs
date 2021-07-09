//in multi-level inheritance, a class is being derived from parent class and then it acts like a parent class of other class which
//inherits it. 

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

class C : public B
{
    public:
    void funcC()
    {
        cout<<"function called of class C.";
    }
};

int main()
{
    C obj;
    obj.funcA(); //function called of class A using object of class C as it inherits all the public members of class B which inherits 
                 //all public members of class A 
    obj.funcB();//public member function called of class B
    obj.funcC();
    return 0;
}