#include<iostream>
using namespace std;
int main()
{
    int rows,cols,i,j;
    cout<<"enter how many rows and columns you want to form a rectangular pattern: ";
    cin>>rows>>cols;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    //this will print the pattern as :
    //****
    //****
    //****
    //****
    //****
    //if we give the values as 5 and 4 for rows and column respectively
    return 0;

}