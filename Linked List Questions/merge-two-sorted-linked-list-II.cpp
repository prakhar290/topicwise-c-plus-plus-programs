//merging two sorted linked list using recursion.

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
void insertathead(node* & head,int value)
{
    node* n  = new node(value);
    head = n;
    head->next = NULL;
}
void insert(node* &head, int value)
{
    if(head==NULL)
    {
        insertathead(head,value);
        return ;
    }
    node *n = new node(value);
    node* temp = head;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void print(node *head)
{
    while(head!=NULL)
    {
        cout<<head->data<<"->";
        head = head->next;
    }
    cout<<"NULL"<<endl;
}

node* mergerecursion(node* &head1, node* &head2)
{
    if(head1==NULL)
    {
        return head2;
    }
    if(head2==NULL)
    {
        return head1;
    }
    node *result;
    if(head1->data<head2->data)
    {
        result = head1;
        result->next = mergerecursion(head1->next,head2);
    }
    else
    {
        result = head2;
        result->next = mergerecursion(head1,head2->next);
    }
    return result;
}

int main()
{
    node *head1 = NULL;
    node *head2 = NULL;
    for(int i=1;i<10;i+=2)
    {
        insert(head1,i);
    }
    for(int i=1;i<7;i++)
    {
        insert(head2,i);
    }
    cout<<"your first linked list is:\n";
    print(head1);
    cout<<"your second linked list is:\n";
    print(head2);
    node*  head3 = mergerecursion(head1,head2);
    cout<<"now the merged linked list is:\n";
    print(head3);
    return 0;
}