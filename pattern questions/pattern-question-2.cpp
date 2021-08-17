/* you are given a string using that you have to create a pattern as below: 
input string1 : Z8W#3CV-)5YY5^&2*_4
output : 
Z                ^&  *_
Z                ^&  *_
Z                    *_
Z      CV-)  YY      *_
Z      CV-)  YY 
Z  W#  CV-)  YY
Z  W#  CV-)  YY
Z  W#  CV-)  YY

input string2: a3B10C$2D**4ef1g&-5f=3
output:
   B  C$  D**
   B  C$  D**
   B      D**
   B      D**
   B
   B              g&-
   B              g&-
a  B              g&-  f=
a  B              g&-  f=
a  B          ef  g&-  f= 
*/


#include<iostream>
#include<string>
#include<vector>
using namespace std;
vector<string> print(int maxsize,int count,string word,int row,int colcount)
{
    int i=0;
    vector<string> s;
    if(count%2==0)
    {
        for(int j=0;j<maxsize;j++)
        {
            if(j<count)
            s.push_back(word);
            else
            s.push_back(" ");
        }
        return s;
    }
    if(count%2!=0)
    {
        while(i<maxsize-count)
        {
            s.push_back(" ");
            i++;
        }
    }
    for(int j=i;j<maxsize;j++)
    {
        s.push_back(word);
    }
    
    return s;
}
int main()
{
    string s;
    cout<<"enter the string to print the pattern: ";
    cin>>s;
    int maxsize=INT_MIN;
    int colcount=0;
    for(int i=0;i<s.size();i++)
    {
        string nums = "";
        int num;
        if(s[i]>='0' && s[i]<='9')
        {
        while(s[i]>='0' && s[i]<='9')
        {
            nums += s[i];
            i++;
        }
        colcount++;
        num = stoi(nums);
        maxsize = max(maxsize,num); 
        }
    }
    vector<vector<string>> pat;
    int row=0;
    for(int i=0;i<s.size();)
    {
        string word = "";
        while(!(s[i]>='0' && s[i]<='9'))
        {
            word += s[i];
            i++;
        }
        string size="";
        while(s[i]>='0' && s[i]<='9')
        {
            size += s[i];
            i++;
        }
        int count = stoi(size);
        pat.push_back(print(maxsize,count,word,row,colcount));
        
    }
    for(int i=0;i<pat.size();i++)
    {
        for(int j=0;j<pat[i].size();j++)
        {
            cout<<pat[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"another way printing:"<<endl;
    for(int i=0;i<pat[0].size();i++)
    {
        for(int j=0;j<pat.size();j++)
        {
            cout<<pat[j][i]<<"  ";
        }
        cout<<endl;
    }
    return 0;
}
