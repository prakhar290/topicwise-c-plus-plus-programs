#include<iostream>
using namespace std;
int main()
{
    
    int array[100][100];
    int r1,r2,c1,c2,i,j;
    cout<<"enter the size of first matrix (row size first and then col size): ";
    cin>>r1>>c1;
    cout<<"enter the elements of your matrix: ";
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            cin>>array[i][j];
        }
    }
    cout<<"printing your first matrix: \n";
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
    int b[100][100];
    cout<<"enter the size of second matrix (row size first and then col size): ";
    cin>>r2>>c2;
    cout<<"enter the elements of your matrix: ";
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            cin>>b[i][j];
        }
    }
    cout<<"printing your second matrix: \n";
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    int c[100][100];
    if(c1==r2)
    {
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                c[i][j]=0;
                for(int k=0;k<c1;k++)
                {
                    c[i][j] = c[i][j] + array[i][k]*b[k][j]; 
                }
            }
        }
        cout<<"printing your matrix after multiplication: \n";
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                cout<<c[i][j]<<" ";
            }
            cout<<endl;
        }  
        return 0;      
    }
    else
    cout<<"matrix multiplication is not possible.";
    return 0;
}
