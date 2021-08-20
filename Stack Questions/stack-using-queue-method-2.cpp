/* In this method we are using two queue and making the pop operation costly, the steps are: 
1. insert element in queue q1
2. now to perform pop operation we do transfer all the elemnts from q1 to q2 till the size of q1 becomes 1 
3. pop the element from q1 and swap the queue q1 with q2 */

#include<iostream>
#include<queue>  // to use inbuilt queue functions
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
        cout<<"value inserted."<<endl;
        q1.push(val);
        n++;
    }
    void pop()
    {
        if(q1.empty())
        {
            cout<<"no element to perform pop operation.";
            return;
        }
        while(q1.size()!=1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        cout<<"element deleted."<<endl;
        q1.pop();
        n--;
        queue<int> temp = q1;
        q1 = q2;
        q2 = temp;
    }
    int top()
    {
        if(q1.empty())
        {
            cout<<"no element."<<endl;
            return -1;
        }
        while(q1.size()!=1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        return q1.front();
    }
    int size()
    {
        if(q1.empty())
        {
            return 0;
        }
        return n;
    }
    bool empty()
    {
        if(q1.empty())
        {
            return true;
        }
        return false;
    }
};

int main()
{
    stack s;
    cout<<"----------inserting elements---------\n\n";
    for(int i=0;i<5;i++)
    {
        s.push(i+1);
    }
    cout<<"the top element of stack is: "<<s.top()<<endl;
    cout<<"\ndeleting an element.\n\n";
    s.pop();
    cout<<"now the top element is: "<<s.top()<<endl;
    cout<<"is stack empty: ";
    if(s.empty())
    {
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    cout<<"the size of stack is: "<<s.size()<<endl;
    return 0;
}