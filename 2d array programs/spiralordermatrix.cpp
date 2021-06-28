#include<iostream>
using namespace std;
int main()
{
    
    int array[100][100];
    int rows,cols,i,j;
    cout<<"enter the size of 2d array (row size first and then col size): ";
    cin>>rows>>cols;
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
    cout<<"printing array elements in spiral order of matrix: \n";
    int rowstart=0,rowend=rows-1,colstart=0,colend=cols-1;
    while(rowstart<=rowend || colstart<=colend)
    {
        //printing starting row till column end
        for(j=colstart;j<=colend;j++)
        {
            cout<<array[rowstart][j]<<" ";
        }
        rowstart++;
        //for printing end column till row end
        for(i=rowstart;i<=rowend;i++)
        cout<<array[i][colend]<<" ";
        colend--;
        //for printing rowend till colstart
        for(j=colend;j>=colstart;j--)
        cout<<array[rowend][j]<<" ";
        rowend--;
        //for printing starting column till rowstart
        for(i=rowend;i>=rowstart;i--)
        cout<<array[i][colstart]<<" ";
        colstart++; 
    }
    return 0;
}
