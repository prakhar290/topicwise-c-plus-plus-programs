 // swapping can be done on vector using swap(vector1,vector2) function.  
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,a;
    vector <int> v;
    cout<<"enter how many elements do you want to enter: ";
    cin>>n;
    cout<<"enter the elements first vector: ";
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    cout<<"your first vector is: ";
    for(auto i:v)
    {
        cout<<i<<" ";
    }
    vector <int> v2(3,10); // another way of declaring and initializing of a vector in this 3 is the size of vector and 10 is element
                           // which is stored in the vector three times.
    cout<<"\nanother vector is: ";
    for(auto j:v2)
    {
        cout<<j<<" ";
    }
    //now swapping the elements of both the vector v and v2 using swap() function
    swap(v,v2);
    cout<<"\nboth the vectors after swapping are: ";
    cout<<"\nfirst vector v is: ";
    for(auto i:v)
    {
        cout<<i<<" ";
    }
    cout<<"\nsecond vector is: ";
    for(auto j:v2)
    {
        cout<<j<<" ";
    }
    return 0;
}