#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"input the value for creating a half inverted pyramid: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=n;j>i;j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    //if input is 5 then output be like:
    //*****
    //****
    //***
    //**
    //*
    return 0;
}