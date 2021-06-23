#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n,a;
    vector <int> v;
    cout<<"enter how many elements do you want to enter: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    cout<<"\n your vector elements are: ";
    for(auto i:v)
    {
        cout<<i<<" ";
    }
    sort(v.begin(),v.end()); // function for sorting
    cout<<"\nthe sorted vector is: ";
    for(auto i:v)
    {
        cout<<i<<" ";
    }
    return 0;
}