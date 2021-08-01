#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node* prev;
    node* next;
    node(int value)
    {
        data = value;
        prev = NULL;
        next = NULL;
    }
};

// to insert node at the head of linked list
void insertathead(node* &head, int value)
{
    node* n = new node(value);
    n->next = head;
    if(head!=NULL)
    {
        head->prev = n;
    }
    head = n;
}
// to insert nodes in a doubly linked list
void insertattail(node* &head, int value)
{
    node* n = new node(value);
    node *temp = head;
    if(head==NULL)
    {
        insertathead(head,value);
        return;
    }
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
        temp->next = n;
        n->prev = temp;
}
// to print the doubly linked list
void print(node* head)
{
    node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
//to delete the head node
void deleteathead(node* &head)
{
    node* todelete = head;
    head = head->next;
    head->prev = NULL;
    delete todelete;
}
//to delete a node from the list
void deletion(node* &head, int pos)
{
    node* temp = head;
    int count=1; //considering indexing from 1
    if(pos==1)
    {
        deleteathead(head);
        return;
    }
    while(temp!=NULL && count!=pos)
    {
        temp = temp->next;
        count++;
    }
    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
    delete temp;
}

int main()
{
    node* head = NULL;
    insertattail(head,1);
    insertattail(head,2);
    insertattail(head,3);
    insertattail(head,4);
    insertattail(head,5);
    insertattail(head,6);
    cout<<"doubly linked list is:\n";
    print(head);
    cout<<"deleting a node 2 from the list.\n";
    deletion(head,2);
    cout<<"doubly linked list after deletion is:\n";
    print(head);
    return 0;
}