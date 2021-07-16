//reversing a linked list using the recursive method 

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

void insert(node* &head, int value)
{
    node *n = new node(value);
    if(head==NULL)
    {
        head = n;
        return;
    }
    node *temp  = head;
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

node* recursive_reverse(node* &head)
{
    if(head==NULL || head->next==NULL) //base condition
    {
        return head;
    }
    node* newhead = recursive_reverse(head->next); //calling recursively and getting the elements reversed
    head->next->next = head; //for reversing the second element's next address point towards the head of linked list
    head->next = NULL; //and in the end pointing the head to NULL to reverse the whole linked list
    return newhead;
}

int main()
{
    node *head = NULL;
    insert(head,1);
    insert(head,2);
    insert(head,3);
    insert(head,4);
    print(head);
    node* newhead = recursive_reverse(head);
    cout<<"reversed linked list using recursive method.\n";
    print(newhead);
    return 0;
}