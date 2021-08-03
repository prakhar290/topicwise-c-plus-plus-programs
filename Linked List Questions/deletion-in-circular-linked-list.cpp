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
void insertathead(node* &head,int value)
{
    node* n  = new node(value);
    if(head==NULL)
    {
        n->next = n;
        head = n;
        return ;
    }
    node* temp = head;
    while(temp->next!=head)   //linking the last node to the new node created in the beginning
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
    head = n;
}
void insert(node* &head, int value)
{
    node *n = new node(value);
    node* temp = head;
    if(head==NULL)
    {
        insertathead(head,value);
        return ;
    }
    while(temp->next!=head)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
}

void deleteathead(node* &head)
{
    node* temp = head;
    while(temp->next!=head)
    {
        temp = temp->next;
    }
    node* todelete = head;
    temp->next = head->next;
    head = head->next;
    delete todelete;
}

void deletion(node* &head, int pos)
{
    if(pos==1)
    {
        deleteathead(head);
        return ;
    }
    node *temp = head;
    int count=1;
    while(count!=pos-1)
    {
        temp = temp->next;
        count++;
    }
    node* todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}

void print(node *head)
{
    node *temp = head;
    do  //using do-while loop because if we use while then there will be some issue of not printing the last node or not entering in the loop.
    { 
        cout<<temp->data<<"->";
        temp = temp->next;
    } while (temp!=head);
    
    cout<<"NULL"<<endl;
}
//this function will print list as normal form, if you want to to see the circularness of it, do a slight chaneg in the while condition
//do it as:  while(temp!=NULL); and teh execute the program the list will be printed endlessly
int main()
{
    node *head = NULL;
    for(int i=1;i<=6;i++)
    {
        insert(head,i);
    }
    cout<<"your circular linked list is:\n";
    print(head);
    cout<<"now list after deleting the 2nd node of the circular list is:\n";
    deletion(head,2);
    print(head);
    cout<<"deletion at head node is also done now:\n";
    deletion(head,1);
    print(head);
    return 0;
}

