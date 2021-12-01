/* printing pyramid pattern: 
if n = 5, Pattern will be like:

               *
              ***
             *****
            *******
           *********
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter any number: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=n-1;j>=0;j--)
        {
            if(j<=i)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        for(int j=0;j<i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
