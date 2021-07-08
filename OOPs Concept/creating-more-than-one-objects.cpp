#include<iostream>
using namespace std;

class student
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
    //we can create as many objects we want.
    //first way is normally creating the objects like below:
    student a;
    student b;
    student c;
    a.name = "prakhar";
    b.name = "ankit";
    c.name = "monu";
    a.age = 21;
    b.age = 23;
    c.age = 23;
    a.gender = 'm';
    b.gender = 'm';
    c.gender = 'm';
    // to print the details of all student we have to call print function for every created object.
    cout<<"-----------printing details of normally created objects:-------------\n";
    a.print();
    b.print();
    c.print();  
    cout<<endl;
    //we can also make an array of objects to create as many objects we want by giving its size like below: 
    student arr[4];
    for(int i=0;i<4;i++)
    {
        cout<<"enter the name of student: ";
        cin>>arr[i].name;
        cout<<"enter the age of student: ";
        cin>>arr[i].age;
        cout<<"enter the gender of student: ";
        cin>>arr[i].gender;
    }
    cout<<"----------------printing details of array created objects:----------------\n";
    // to print the details of above students created as array we use loop
    for(int i=0;i<4;i++)
    {
        arr[i].print();
    }
    return 0;
}