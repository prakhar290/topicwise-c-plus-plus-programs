/* In this approach we use a function call stack and also create one stack s1, with dequeue/pop/deletion opeartion as costly
the steps are as: 
1. to enqueue- push the element to created stack s1
2. to dequeue- if stack s1 is empty then print can't perform the operation
             - if stack s1 has only one element than return it and pop it
             - recursively pop everything from the stack s1 and store the popped element in a variable and push that variable to
               stack s1 and return it */

#include<iostream>
#include<stack>
using namespace std;

class Queue
{
    stack <int> s1;
    public:
    void push(int val)
    {
        s1.push(val);
        cout<<"element inserted."<<endl;
    }
    int pop()
    {
        if(s1.empty())
        {
            cout<<"can not perform the operation";
            return -1;
        }
        int x = s1.top();
        s1.pop();
        if(s1.empty())
        {
            return x;
        }
        int res = pop();
        s1.push(res);
        return res;
    }
    bool empty()
    {
        if(s1.empty())
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
    cout<<"\n\n-------deleting elements from the queue--------\n\n";
    cout<<"element deleted is: "<<q.pop()<<endl;
    q.pop();
    q.pop();
    q.pop();
    cout<<"\nis queue now empty: ";
    if(q.empty())
    {
        cout<<"Yes\n";
    }
    else
    {
        cout<<"No\n";
    }
    return 0;
}