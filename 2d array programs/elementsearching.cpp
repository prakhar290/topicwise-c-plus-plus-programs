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
    int element;
    bool flag=false;
    cout<<"enetr the element to find its location: ";
    cin>>element;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            if(array[i][j]==element)
            {
                flag = true;
                cout<<"element found at position "<<i+1<<" row and "<<j+1<<" column.";
            }
        }
    }
    if(flag==false)
    cout<<"element not found";
    return 0;
}
