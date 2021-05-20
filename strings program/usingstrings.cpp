#include<iostream>
#include<string> // library to use string functions
using namespace std;
int main()
{
    string str;//declaration of string
    str = "strings"; //initialisation of string variable
    cout<<"first string: "<<str<<endl;
    string str2 = "initialising and declaring at same time";//declaartion and initialisation 
    cout<<"second string: "<<str2<<endl;
    string str3(5, 'p'); // if we want all the characters to be same then we use this decalartion in which firstly we define how many characters we want and then the character we want
    cout<<"third string: "<<str3<<endl;
    string str4;
    cout<<"try entering another string(line string): ";
    getline(cin, str4);// this will take the whole line with spaces in it which is not possible in normal input using 'cin'
    cout<<"fourth string is: "<<str4<<endl;
    return 0;
}