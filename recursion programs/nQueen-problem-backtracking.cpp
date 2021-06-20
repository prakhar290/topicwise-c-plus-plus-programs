//In this problem, we have to create an NxN matrix(chess board) in which we have to place N queens in such a way so that any queen get  
//attacked by any other queen on the chess board. As we know queen can move in any direction and as much steps it wants so by keeping
//this in mind we have create the chess board with our N queens in it.
//for ex- for N = 4 chess board formed with N queens should look like:
// 0 1 0 0
// 0 0 0 1
// 1 0 0 0 
// 0 0 1 0  where 1s representing the place wher we have to put the queens such that they follow the given conditon.
#include<iostream>
using namespace std;
bool issafe(int **arr,int x,int y,int n)
{
    for(int row=0;row<x;row++) // this is for checking the rows that any on the row for same column did have the queen or not
    {                          // if any row contains the queen then we'll return false and try out for another column
        if(arr[row][y]==1)
        return false;
    }
    //for checking the diagonals that if they contain any queen in the diagonal place 
    int row=x;
    int col=y;
    while(row>=0 && col>=0)//for checking upper left diagonal
    {
        if(arr[row][col]==1)
        {
            return false;
        }
        row--;
        col--;
    }
    row = x;
    col = y;
    while(row>=0 &&col<=n)//for checking upper right diagonal
    {
        if(arr[row][col]==1)
        {
            return false;
        }
        row--;
        col++;
    }
    return true;
}
bool nQueen(int **arr,int x,int n)
{
    if(x>=n)
    {
        return true; // base condition
    }
    for(int col=0;col<n;col++)
    {
        if(issafe(arr,x,col,n))
        {
            arr[x][col]=1;
            if(nQueen(arr,x+1,n))
            {
                return true;
            }
            arr[x][col]=0; // this is backtracking if we the next row cannot contain any queen so we'll backtrack it and change the
                           //position of previous queen and check again.
        }
    }
    return false;
}
int main()
{
    int n;
    cout<<"enter the size of chess board you want to create: ";
    cin>>n;
    int **arr = new int *[n];
    for(int i=0;i<n;i++)
    {
        arr[i] = new int [n];
        for(int j=0;j<n;j++)
        {
            arr[i][j]=0; //for not getting garbage values
        }
    }
    if(nQueen(arr,0,n)) //here 0 represents the starting row 
    {
        cout<<"your chess board with "<<n<<" queens look like:\n";
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}