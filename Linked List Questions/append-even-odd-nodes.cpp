/*Question- Put even nodes of the linked list after all the odd nodes. for example list = 1->2->3->4->5->6->NULL so the even nodes are 2,4,6 and odd nodes are 1,3,5 so the 
output list should be like 1->3->5->2->4->6->NULL*/

#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node *next;

    node(int value)
    {
        data = value;
        next = NULL;
    }
};

void insert(node* &head,int value)
{
    node *n = new node(value);
    if(head==NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void display(node *head)
{
    node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

void append_even_odd(node* &head)
{
    node *odd = head;
    node *even = head->next;
    node * evenstart = even;
    while(odd->next!=NULL && even->next!=NULL)
    {
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even = even->next;
    }
    odd->next = evenstart;
    if(odd->next==NULL)
    {
        even->next = NULL;
    }
}
int main()
{
    node *head = NULL;
    for(int i=1;i<=6;i++)
    {
        insert(head,i);
    }
    cout<<"your linked list is:\n";
    display(head);
    cout<<"your linked list after appending is:\n";
    append_even_odd(head);
    display(head);
    return 0;
}
