/* suppose we have two linked list as  list1 = 1->2->3->4->5->6->8->NULL and list2 = 2->4->NULL so we have to intersect these list
as list2 = 2->4->6->NULL*/

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

void intersect(node* &head1, node* &head2,int pos) //at which position we want to intersect the lists
{
    node *temp1 = head1;
    pos--;
    while(pos--)
    {
        temp1 = temp1->next; //reaching to the node which we want to intersect
    }
    node* temp2 = head2;
    while(temp2->next!=NULL)
    {
        temp2 = temp2->next; //reaching the final node of the second list to intersect it with list 1
    }
    temp2->next = temp1; //giving the address of the node at which we want to intersect the two lists
}

int main()
{
    node *head1 = NULL;
    node *head2 = NULL;
    insert(head1,1);
    insert(head1,2);
    insert(head1,3);
    insert(head1,4);
    insert(head1,5);
    insert(head1,6);
    cout<<"list 1 is :\n";
    print(head1);
    insert(head2,10);
    insert(head2,9);
    insert(head2,8);
    insert(head2,7);
    cout<<"\nlist 2 is:\n";
    print(head2);
    intersect(head1,head2,6);
    cout<<"\nlist 1 after intersection is:\n";
    print(head1);
    cout<<"\nlist 2 after intersection is:\n";
    print(head2);
    return 0;
}