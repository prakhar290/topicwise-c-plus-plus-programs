/* In this approach we two stacks and the dequeue operation becomes costly. So the steps are :
1. to perform enqueue just insert element in stack s1
2. - to perform dequeue first check if both the stacks are empty then print can't perform dequeue operation
   - if stack s2 is empty then while stack s1 is not empty transfer all the elements to stack s2
   - pop the element from the stack s2 and return it */

#include<iostream>
#include<stack> //using the library to use inbuilt stack functions
using namespace std;

class Queue
{
    stack <int> s1;
    stack <int> s2;
    public:
    void push(int val)
    {
        s1.push(val);
        cout<<"element inserted"<<endl;
    }
    void pop() 
    {
        if(s1.empty() && s2.empty())
        {
            cout<<"can not pop any element.";
            return ;
        }
        if(s2.empty())
        {
            while(!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        cout<<"element deleted is: "<<s2.top()<<endl;
        s2.pop();
    }
    int top()
    {
        if(s1.empty() && s2.empty())
        {
            cout<<"there is no element.\n";
            return -1;
        }
        if(s2.empty())
        {
            while(!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        return s2.top();
    }
    bool empty()
    {
        if(s1.empty() && s2.empty())
        {
            return true;
        }
        return false;
    }

};

int main()
{
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout<<"the top element is: "<<q.top();
    cout<<"\n\n--------deleting all the elements--------\n\n";
    q.pop();
    q.pop();
    q.pop();
    cout<<"\nIs queue empty: ";
    if(q.empty())
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
    return 0;
}
