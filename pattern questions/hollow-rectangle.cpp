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
            if(i==0 || i==(rows-1) ||j==0 || j==(cols-1))
            cout<<"*";
            else
            cout<<" ";
        }
        cout<<"\n";
    }
    return 0;

}


//output//

// ******
// *    *
// *    *
// ******
