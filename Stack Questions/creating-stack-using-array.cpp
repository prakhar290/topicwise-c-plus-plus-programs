//stack is a linear data structure which stores the list of items, in which an item can be added or removed just from only one side
//It follows LIFO mechanism i.e Last In first Out. It's operations are push, pop, top, empty.

#include<iostream>
 using namespace std;

#define n 100
class stack
{
    int *arr; //declaring array
    int top;
    public:
    stack()
    {
        arr = new int[n]; //defining array using pointer declaration
        top = -1;
    }

    void push(int ele)  //function to insert the element in the stack
    {
        if(top==n-1)
        {
            cout<<"stack overflow";
            return ;
        }
        top++;
        arr[top] = ele;
        cout<<"value inserted\n";
    }

    void pop()
    {
        if(top==-1)
        {
            cout<<"stack underflow";
            return ;
        }
        top--;
        cout<<"element removed.\n";
    }

    int topelement()
    {
        if(top==-1)
        {
            cout<<"no element present";
            return -1;
        }
        return arr[top];
    }

    bool isempty()
    {
        if(top==-1)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    stack st;
    st.push(1);
    st.push(2);
    st.pop();
    cout<<"the top element of the stack is: "<<st.topelement()<<endl;
    cout<<"now if the stack is empty you are getting 1 in next line otherwise 0.\n";
    cout<<st.isempty()<<endl;
    return 0;
}