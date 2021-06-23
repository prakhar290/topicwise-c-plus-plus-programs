// Deletion can be done on vector using pop_back() function.  
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,a;
    vector <int> v;
    cout<<"enter how many elements do you want to enter: ";
    cin>>n;
    cout<<"enter the elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    cout<<"your entered elements are: ";
    for(auto i:v)
    {
        cout<<i<<" ";
    }
    //now we delete an element using pop_back() function of vector.
    v.pop_back();
    cout<<"\nremaining elements are: ";
    for(auto i:v)
    {
        cout<<i<<" ";
    }
    return 0;
}