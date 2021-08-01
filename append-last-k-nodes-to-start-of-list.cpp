/* for example we have a list as 1->2->3->4->5->6->NULL and we have a value k, suppose 3  so the output will be
 4->5->6->1->2->3->NULL*/

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
int findlength(node* head)
{
    int count=0;
    while(head!=NULL)
    {
        count++;
        head = head->next;
    }
    return count;
}

node* append_k_node(node* &head, int k)
{
    int len = findlength(head);
    node* newhead;
    node* newtail;
    node* temp = head;
    int count = 1;
    k = k % len; //beacuse k can be greater than length of the list
    while(temp->next!=NULL)
    {
        if(count==len-k)
        {
            newtail = temp;
        }
        if(count==len-k+1)
        {
            newhead = temp;
        }
        temp = temp->next;
        count++;
    }
    newtail->next = NULL;
    temp->next = head;
    return newhead;
}
int main()
{
    node *head = NULL;
    for(int i=1;i<7;i++)
    {
        insert(head,i);
    }
    cout<<"your linked list is:\n";
    print(head);
    int k;
    cout<<"enter the position from where you want to append the list: ";
    cin>>k;
    node* newhead = append_k_node(head,k);
    cout<<"\nyour appended list is:\n";
    print(newhead);
    return 0;
}