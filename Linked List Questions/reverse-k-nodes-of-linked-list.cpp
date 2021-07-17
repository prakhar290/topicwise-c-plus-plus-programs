/* We have to reverse k node of the linked list. For example we have 1->2->3->4->5->6->NULL as linked list and the value of k is 2
so the output be like 2->1->4->3->6->5->NULL*/

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
        head=n;
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
    while(head!=NULL)
    {
        cout<<head->data<<"->";
        head = head->next;
    }
    cout<<"NULL"<<endl;
}

node* reverse_k_node(node* &head, int k)
{
    node* prev = NULL;
    node* current = head;
    node* nextptr;
    int count=0;
    while(current!=NULL && count<k)
    {
        nextptr = current->next;
        current->next = prev;
        prev = current;
        current = nextptr;
        count++;
    } // reversing k nodes using iterative method
    if(current!=NULL)
    {
        head->next = reverse_k_node(current,k); //reversing recursively the remaining k nodes by passing the  current pointer
                                                //of iterative reversing method as it is pointing to the next node after k node 
    }
    return prev;
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
    print(head);
    cout<<"linked list after reversing k nodes.\n";
    node *newhead = reverse_k_node(head,3);
    print(newhead);
    return 0;
}