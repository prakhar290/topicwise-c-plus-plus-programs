#include<iostream>
using namespace std;

int main()
{
    
    int array[100][100];
    int rows,cols,i,j;
    cout<<"enter the size of square matrix (row = columns): ";
    cin>>rows>>cols;
    cout<<"enter the elements of your 2d array: ";
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            cin>>array[i][j];
        }
    }
    cout<<"printing your square matrix: \n";
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"the transpose of your matrix: \n";
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            cout<<array[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
