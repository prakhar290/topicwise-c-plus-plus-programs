#include<iostream>
using namespace std;

class student
{
    public:
    string name;
    int age;
    char gender;

    student() //default constructor this will be called every time an object is created 
    {
        cout<<"Default Constructor called.\n";
    }

    student(string s, int a, char g) //creating a constructor. It is called parameterized constructor
    {
        cout<<"Parameteried Constructor called.\n";
        name = s;
        age = a;
        gender = g;
    }

    student (student &a) //copy constructor. This contains the same value as any other object named as a
    {
        cout<<"Copy Constructor called.\n";
        name = a.name;
        age = a.age;
        gender = a.gender;
    }
    void print()
    {
        cout<<"name: "<<name<<endl;
        cout<<"age: "<<age<<endl;
        cout<<"gender: "<<gender<<endl;
    }
    
};
int main()
{
    student a("prakhar",21,'m'); //giving the values to the members of the class using constructor
    //now to print the values we use the print function of the class
    student b; // default constructor 
    student c = a; // copy constructor
    cout<<"the values of members of object a is:\n";
    a.print(); 
    cout<<"the values of members of object c is:\n";
    c.print();
    return 0;
}