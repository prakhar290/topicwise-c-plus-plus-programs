//In tower of hanoi problme we have to move some rings from source to a destination with some given conditions:
//first condition is that we can only move the rings one-by-one 
//second condition is that a big ring cannot be held above the small ring i.e we have to put the bigger ring first and smaller ones accordingly
#include<iostream>
using namespace std;
void tower(int n, char src, char dest, char helper)
{
    if(n==0)
    {
        return;
    }
    tower(n-1,src,helper,dest);
    cout<<"moved from "<<src<<" to "<<dest<<endl;
    tower(n-1,helper,dest,src);
}
int main()
{
    int num;
    cout<<"enter how many rings you want to move from tower A to tower C: ";
    cin>>num;
    cout<<"the procedure of moving the rings from A to C be like:\n";
    tower(num,'A','C','B');
    return 0;
}