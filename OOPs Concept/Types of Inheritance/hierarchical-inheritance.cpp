//in heirarchical inheritance, there is a formation of heirarchy between the classes called as heirarchical structure.

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

class C : public A  
{
    public:
    void funcC()
    {
        cout<<"function called of class C.\n";
    }
};

class D : public B  // a heirarchical structure is forming
{
    public:
    void funcD()
    {
        cout<<"function called of class D.\n";
    }
};

class E : public C  // a heirarchical structure is forming
{
    public: 
    void funcE()
    {
        cout<<"function called of class E.";
    }
};
int main()
{
    D obj1;
    E obj2;
    //if we try to call private members of any class A and B then it will give us an error. check by removing comments from below line
    //obj.a = 3;
    obj1.funcA(); //public member function called of class A using object of class D
    obj1.funcB(); //public member function called of class B using object of class D
    obj1.funcD();
    obj2.funcA(); //public member function called of class A using object of class E
    obj2.funcC(); //public member function called of class C using object of class E
    obj2.funcE();
    return 0;
}