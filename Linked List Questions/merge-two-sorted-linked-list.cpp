// merging two linked list is same as merging two sorted arrays

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

node* mergelist(node* &head1, node* &head2, node* &head3)
{
    if(head1->data<head2->data)
    {
        insert(head3,head1->data);
        head1 = head1->next;
    }
    else
    {
        insert(head3,head2->data);
        head2 = head2->next;
    }
    while(head1!=NULL && head2!=NULL)
    {
        int val;
        if(head1->data<head2->data)
        {
            val = head1->data;
            insert(head3,val);
            head1 = head1->next;
        }
        else
        {
            insert(head3,head2->data);
            head2 = head2->next;
        }
    }
    while(head1!=NULL)
    {
        insert(head3,head1->data);
        head1 = head1->next;
    }
    while(head2!=NULL)
    {
        insert(head3,head2->data);
        head2 = head2->next;
    }
    return head3;
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
    node*  head3 = NULL;
    mergelist(head1,head2,head3);
    cout<<"now the merged linked list is:\n";
    print(head3);
    return 0;
}