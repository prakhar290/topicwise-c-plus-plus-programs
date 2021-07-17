// cycle in a linked list means that two nodes of the list is pointing to the a same node in the list.

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
    cout<<"cycle created.\n";
    //to see the cycle in the linked list please remove the comments from the below line because this will print
    // infinitely as it is a cycle
    //print(head);
    return 0;
}