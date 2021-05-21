#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s1 = "fam";
    string s2 = "ily";
    cout<<"first string: "<<s1<<endl;
    cout<<"second string: "<<s2<<endl;
    string s3 = s1.append(s2); //add two strings
    cout<<"string after appending string second into string first: "<<s3<<endl;
    cout<<"appending of two strings with differnt way: "<<s1 + s2<<endl;
    s3.clear();
    cout<<"string three after using clear function: "<<s3<<endl;
    string s4 = "abc";
    string s5 = "pvr";
    if(s1.compare(s2))//to compare two strings lexcographically
    {
        cout<<"both strings are equal."<<endl;
    }
    if(s3.empty())//to check whether a string is empty or not
    {
        cout<<"string three is empty."<<endl;
    }
    s1.erase(1,1);//to erase a single/group of character/s of a string
    cout<<"string first after using erase function: "<<s1<<endl;
    int index = s2.find("y");//to find the index/position of any character
    cout<<"the position of (y) in second string is: "<<index<<endl;
    s5.insert(2,"m");//to insert any character at specified position
    cout<<"string fifth after insertion: "<<s5<<endl;
    int length = s5.length();//find the length of string we can use size() too to find the length of string
    cout<<"the length of fifth string is: "<<length<<endl;
    string s6 = s5.substr(1,3);//to find the substring from specified index to number of characters we want in the substring
    cout<<"the substring of fifth string: "<<s6<<endl;
    string s8 = "sjahdgajfuasfbsnfbyg";
    cout<<"the string eight is: "<<s8<<endl;
    sort(s8.begin(),s8.end());
    cout<<"the sorted string is: "<<s8<<endl; 
    return 0; 
}