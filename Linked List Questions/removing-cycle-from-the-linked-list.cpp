// cycle in a linked list means that two nodes of the list is pointing to the a same node in the list.
/* to DETECT a cycle we will use the floyd's algorithm or hare and tortoise algorithm. In this algo what we are doing is that we 
have a hare and a tortoise at the head of the linked list and we will move the tortoise by one step and the ahre by two steps,
if after after some steps the hare and tortoise meet again at the same node then this will indicate that the cycle is present in
the linked list and we return true to it.*/
/* to REMOVE the cycle from thr linked list what we do is that when we get to know that hare and tortoise meet again at same node
so we will take one of them to the head again and the move both by one step suppose we take hare and when the next pointer of both
hare and tortoise points to the same node then we will point the next pointer of tortoise to NULL and the cycle gets removed by 
doing this. print the linked list to check whether the cycle is removed properly or not */  

#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node* next;
    node(int value)
    {
        data = value;
        next = NULL;
    }
};

void insert(node* &head, int value)
{
    node *n = new node(value);
    if(head==NULL)
    {
        head = n;
        return ;
    }
    node *temp = head;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void print(node *head)
{
    node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

void makecycle(node* &head, int pos)
{
    node *temp  =head;
    node *cyclenode; //this will get the node from where we have to create the cycle
    int count=1;
    while(temp->next!=NULL)
    {
        if(count==pos)
        {
            cyclenode = temp; 
        }
        temp = temp->next;
        count++;
    }
    temp->next = cyclenode; //pointing the next pointer of the last node of list to the node where we want to start the cycle
}

bool detect_cycle(node* &head)
{
    node* fast = head;
    node* slow = head;
    while(fast!=NULL && fast->next!=NULL)
    {
        fast = fast->next->next; //moving our hare by two steps
        slow = slow->next; //mocing our tortoise by one step
        if(slow==fast) //condition to check the cycle is present or not
        {
            return true;
        }
    }
    return false;
}

void remove_cycle(node* head)
{
    node *fast = head;
    node *slow = head;
    do
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    while(slow!=fast);  //finding the point where both meet again
    
    fast = head; //taking the hare to head again
    while(fast->next!=slow->next) // and check for the next pointer to point the same node
    {
        fast = fast->next;
        slow = slow->next;
    }
    slow->next = NULL; //removal of the cycle
}

int main()
{
    node *head = NULL;
    insert(head,1);
    insert(head,2);
    insert(head,3);
    insert(head,4);
    insert(head,5);
    insert(head,6);
    insert(head,7);
    insert(head,8);
    cout<<"linked list without cycle.\n";
    print(head);
    makecycle(head,4);
    //to see the cycle in the linked list please remove the comments from the below line because this will print
    // infinitely as it is a cycle
    //print(head);
    cout<<"checking whether the cycle is present in the linked list or not. If it is present the result is 1 otherwise 0.\n";
    cout<<detect_cycle(head);
    cout<<"\nremoving the cycle from the linked list.\n";
    remove_cycle(head);
    print(head);
    return 0;
}