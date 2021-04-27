#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"input the value for creating a zigzag pattern: ";
    cin>>n;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=n;j++)
        {
            if((i+j)%4==0)
            cout<<"* ";
            else if(i==2 && j%4==0)
            cout<<"* ";
            else
            cout<<"  ";
        }
        cout<<endl;
    }
    //if we input 9 then we get the following pattern:
//    *       *     
//  *   *   *   *
//*       *       *    
    return 0;
}