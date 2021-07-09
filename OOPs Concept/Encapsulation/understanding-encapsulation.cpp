//encapsulation means hiding sensitive data from the user. 
//so to hide any data from the user we use private access modifier i.e the members under private access modifier can not be called 
//outside the class so the data under private access modifier is hidden from the outside world.

#include<iostream>
using namespace std;

class A
{
    private:
    int a;
    void funcA()
    {
        cout<<"funcA cannot be called outside this class.\n";
    }
    public:
    int b;
    void funcB()
    {
        b=2;
        cout<<"public funcB is called. Public member can easily be accessed outside the class.\n";
        cout<<"value of variable b is: "<<b;
    }
};

int main()
{
    A obj;
    //if you try to call funcA by using the obj object of class A then it will give you error. Try it by removing the comment from below line
    //obj.funcA();
    obj.funcB();
    return 0;
}