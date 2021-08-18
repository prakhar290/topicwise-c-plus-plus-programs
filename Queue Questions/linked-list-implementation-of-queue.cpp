/* We need linked list implementation of queue because in array implementation there is a issue of memory like if we declare the 
size of array larger and we need small size queue then there is a wastage of memory, and if we define the size smaller and we want
to add more elements then the size then there will be an error, so to resolve it we use linked list implementation as it is
dynamic data structure. */

#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node* next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};

class Queue
{
    node* front;
    node* back;
    public:
    Queue()
    {
        front = NULL;
        back = NULL;
    }
    void enqueue(int x)
    {
        node* newnode = new node(x);
        if(front==NULL && back==NULL)
        {
            front = newnode;
            back = newnode;
        }
        back->next = newnode;
        back = newnode;
        cout<<"element inserted is: "<<back->data<<endl;
    }
    void dequeue()
    {
        if(front==NULL)
        {
            cout<<"queue underflow.";
            return;
        }
        cout<<"the element deleted is: "<<front->data<<endl;
        node* todelete = front;
        front = front->next;
        delete todelete;
    }
    int peek()
    {
        if(front==NULL)
        {
            cout<<"no element."<<endl;
            return -1;
        }
        return front->data;
    }
    bool empty()
    {
        if(front==NULL)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    Queue q;
    cout<<q.peek()<<endl;
    cout<<"\n-----------inserting elements------------\n\n";
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    cout<<"\nNow the first element is: "<<q.peek()<<endl;
    cout<<"\n------------deleting elements----------\n\n";
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    cout<<"\nnow the first element is: "<<q.peek()<<endl;
    cout<<"\nqueue is empty or not: ";
    if(q.empty())
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }
    return 0;
}