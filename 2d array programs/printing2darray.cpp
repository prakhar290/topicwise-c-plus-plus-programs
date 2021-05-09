#include<iostream>
using namespace std;
int main()
{
    int rows,cols,i,j;
    cout<<"enter the size of 2d array (row size first and then col size): ";
    cin>>rows>>cols;
    int array[rows][cols];
    cout<<"enter the elements of your 2d array: ";
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            cin>>array[i][j];
        }
    }
    cout<<"printing your 2d array: \n";
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}