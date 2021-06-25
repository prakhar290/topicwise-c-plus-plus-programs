//Pair is a STL container which allows us to store values in pairs. 
#include<iostream>
using namespace std;
int main()
{
    pair <int,char> p; //declaration of pairs: pair is the datatype and in angle brackets there are the datatypes of the values we want
                       //store together in pair, and then a name given to pair.
    p.first = 3;
    p.second = 'p'; // this is the way to initialize pairs or access the elements of pair, as if we hover on the decalaration i.e on
                    // p.first or p.second it will notify us that which type of data have to be stored in it.
    cout<<"the first value of pair is: "<<p.first;
    cout<<"\nthe second value of pair is: "<<p.second;
    return 0;
}