/* In this method we are making push method costly using two queue. The steps are below: 
1. insert the element in the queue q2 
2. push all the elements of q1 into q2
3. swap q1 and q2 1*/

#include<iostream>
#include<queue>
using namespace std;
 class stack
 {
    int n;
    queue <int> q1;
    queue <int> q2;
    public:
    stack()
    {
        n = 0;
    }
    void push(int val)
    {
        q2.push(val);
        n++;
        while(!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        queue <int> temp = q1;
        q1 = q2;
        q2 = temp;
    }

    void pop()
    {
        q1.pop();
        n--;
    }
    int top()
    {
        if(q1.empty())
        {
            cout<<"no element"<<endl;
            return -1;
        }
        return q1.front();
    }
    int size()
    {
        return n;
    }
 };

 int main()
 {
    stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    cout<<"top element of stack is: "<<s.top()<<endl;
    s.pop();
    cout<<"now the top element after deleeting an element is: "<<s.top()<<endl;
    s.pop();
    cout<<"now the top element after deleeting an element is: "<<s.top()<<endl;
    s.pop();
    cout<<"now the top element after deleeting an element is: "<<s.top()<<endl;
    s.pop();
    cout<<"now the top element after deleeting an element is: "<<s.top()<<endl;
    cout<<"the size of stack is: "<<s.size()<<endl;  
    return 0;
 }