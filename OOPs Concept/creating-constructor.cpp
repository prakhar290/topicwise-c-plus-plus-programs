#include<iostream>
using namespace std;

class student
{
    public:
    string name;
    int age;
    char gender;

    student(string s, int a, char g) //creating a constructor. It is called parameterized constructor
    {
        cout<<"parameteried constructor called.\n";
        name = s;
        age = a;
        gender = g;
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
    a.print(); 
    return 0;
}