#include<iostream>
using namespace std;

class Student
{
    public:
    string name;
    int age;
    char gender;
    void print()
    {
        cout<<"name: "<<name<<endl;
        cout<<"age: "<<age<<endl;
        cout<<"gender: "<<gender<<endl;
    }
    
};
int main()
{
    Student a; //object creation
    //now get details with the help of object, remember one thing that object can call only those member of the class which are public
    cout<<"enter the name of student: ";
    cin>>a.name;
    cout<<"enter the age of student: ";
    cin>>a.age;
    cout<<"enter the gender of student (m/f): ";
    cin>>a.gender;
    //way 1 to print the details of student is by calling each member with the help of object
    cout<<"way 1 to print the details of student is by calling each member with the help of object.\n";
    cout<<"Name: "<<a.name<<endl;
    cout<<"Age: "<<a.age<<endl;
    cout<<"Gender: "<<a.gender<<endl;
    //another way to print the details is calling the function created in the class to print the details of student
    cout<<"another way to print the details is calling the function created in the class to print the details of student.\n";
    a.print();
    return 0;
}
