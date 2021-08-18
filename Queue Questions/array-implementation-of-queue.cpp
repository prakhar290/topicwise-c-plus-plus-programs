/* Queue is a collection of data items in which insertion of elment occurs at one end and removal done at the other end, i.e it 
follows FIFO means First In First Out. There are four operations of queue: 1. Enqueue(insertion) 2. Dequeue(removal/deletion)
3. Peek(finding top element) 4. Empty(checking of queue is empty or not) */

#include<iostream>
using namespace std;
#define n 20
class Queue
{
    int *arr;
    int front;
    int back;
    public: 
    Queue()
    {
        arr = new int[n];
        front = -1;
        back = -1;
    }
    void enqueue(int x) //function for inserting element in queue
    {
        if(back==n-1)
        {
            cout<<"Queue overflow.";
            return;
        }
        back++;
        arr[back] = x;
        if(front==-1)
        {
            front++;
        }
    }
    void dequeue() //deleting or removing an element from queue
    {
        if(front==-1 || front>back)
        {
            cout<<"queue underflow.";
            return ;
        }
        cout<<"the element which is deleted is: "<<arr[front]<<endl;
        front++;
    }
    int peek()
    {
        if(front==-1 || front>back)
        {
            cout<<"no element.";
            return 0;
        }
        return arr[front];
    }
    bool empty()
    {
        if(front==-1 || front>back)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    cout<<"The top element is: "<<q.peek()<<endl;
    cout<<"-------deleting an element---------\n";
    q.dequeue();
    cout<<"\nnow the top element is: "<<q.peek()<<endl;
    cout<<"checking the queue is empty or not, if empty output is true otherwise false:\n";
    if(q.empty())
    {
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    return 0;
}