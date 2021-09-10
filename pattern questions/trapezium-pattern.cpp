/* printing trapezium pattern:
if n = 4 then trapezium formed be like:
        1 2 3 4 17 18 19 20 
          5 6 7 14 15 16
           8 9 12 13
            10 11
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter anny number: ";
    cin>>n;
    int num = 1;
    int mul = n;
    
        int k=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j<i)
            {
                cout<<"  ";
            }
            else
            {
                cout<<num<<" ";
                num++;
            }
        }
        for(int j=i;j<n;j++)
        {
            cout<<(k+mul*mul)<<" ";
            k++;
        }
        mul--;
        cout<<endl;
    }
    return 0;
}