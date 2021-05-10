#include<iostream>
using namespace std;
int main()
{
    char arr[100]; //initialisation of character array as it contains only characters so we use char datatype
    cout<<"enter your character array: ";
    cin>>arr;
    cout<<"your character array is : "<<arr<<endl;
    for(int i=0;arr[i]!='\0';i++)
    {
        
        cout<<"element at index "<<i<<" is "<<arr[i]<<endl;
    }
    cout<<"\ncharacter array ended.";
    return 0;
}