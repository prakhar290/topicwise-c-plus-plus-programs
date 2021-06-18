// Back tracking is an algorithmic technique for solving recursive problems by trying to build every possible solutions incrementally and 
// removing those solutions that fail to satisfy the condiiton of the problem at any time.

//Ques- Rat in a maze- A rat wants to go from a start position to end position but there are some obstacles in the path that does not
//allow the rat to go furthur. The rat can only go in two direction either in row-wise or column-wise. So we have to find the path so that
//the rat can reach its location .
//we are given a 2d matrix containing 0s and 1s where 1 represent the block where rat can move but 0 represent the block those are obstacles
//in the path of rat or the blocks where rat cannot move furthur. in the output we have to give the path to reach the location in the form 
//of 2d matrix.
//for example-  we are given the following matrix: 
//1 0 1 0
//1 1 1 1
//0 1 0 1
//1 0 0 1
//1 1 0 1
// the output should be like: 
//1 0 0 0
//1 1 1 1
//0 0 0 1
//0 0 0 1
//0 0 0 1    this represents the path taken by the rat to reach its end position

//*************Solution****************
#include<iostream>
using namespace std;
bool safeblock(int **a,int x,int y,int n)// to check whether the next block is free to move or becoming a obstacle in the path.
{
    if(x<n && y<n && a[x][y]==1)
    {
        return true;
    }
    return false;
}
bool ratinmaze(int **a,int x,int y,int n,int **solnarr)
{
    if(x==n-1 && y==n-1) //base condition i.e our rat is present at the last block of the path needed to reach the end point 
    {
        solnarr[x][y]=1;
        return true;
    }
    if(safeblock(a,x,y,n))
    {
        solnarr[x][y]=1;
        if(ratinmaze(a,x+1,y,n,solnarr))
        {
            return true;//if the block in forward direction is free to move then returning true
        }
        if(ratinmaze(a,x,y+1,n,solnarr))
        {
            return true;//if the block in downward direction is free to move then returning true
        }
        solnarr[x][y]=0; // this is BACKTRACKING i.e if we found that next block is the obstacle in the path then we will go back and 
                         // choose another path 
        return false;
    }
    return false;
}
int main()
{
    int n;
    cout<<"enter the size of maze in the form matrix: ";
    cin>>n;
    int **a = new int *[n]; //dynamic allocation of 2D array
    for(int i=0;i<n;i++)
    {
        a[i] = new int[n]; //dynamic allocation of 1D array
    }
    cout<<"enter the blocks in the form of 0/1 where 0 represents obstacles where rat can't move and 1 represents the block wher rat can move:\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"your maze is like:\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    int **solnarr = new int *[n]; // this will be our array representing the path used by rat
    for(int i=0;i<n;i++)
    {
        solnarr[i] = new int[n];
        for(int j=0;j<n;j++)
        {
            solnarr[i][j]=0; // we have done this to prevent it from getting garbage value
        }
    }
    if(ratinmaze(a,0,0,n,solnarr))//here a is the maze given, (0,0) are the coordinates i.e the index value of the starting point of the rat
    {                             //n is the size of maze and solnarr in which we are getting our output
    cout<<"the path followed by the rat to move from start position to end position is:\n";
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<solnarr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else 
    cout<<"Maze is not given properly.";
    return 0;
}