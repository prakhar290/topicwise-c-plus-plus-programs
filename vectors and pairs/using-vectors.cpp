//vectors are the dynamic array which don't need to specify the size of of it at the time of initialization we can add as many elements 
//as we want. For using vectors we have to add 'vector' library.
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> v; // declaring vector: vector is the type then in angle brackets we have the type which we want the elements of vector
                    // have and then the variable name which represent the vector
    //to add elements in vector we use 'push_back()' function 
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    // to print the elements of vector we can use some methods : 
    // first method by using normal loops
    cout<<"\nprinting vector by first method: ";
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    // second method by using iterator
    cout<<"\nprinting vector by second method: ";
    vector <int>:: iterator it; //creation of an iterator
    for(it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<" "; // as it iterator is works as a pointer which contain the first element of the vector
    }
    //third method by using 'auto'
    cout<<"\nprinting vector by thrid method: ";
    for(auto element:v) // this can be read as auto element in v. this will retrieve the element and print it and then go for next element 
    {
        cout<<element<<" ";
    }
    return 0;
}