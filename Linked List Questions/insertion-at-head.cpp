//to create linked list we have to create nodes and these nodes contains two part 1. data/value and 2. next pointer which points to the
//address of next node and if next node is not present than it points to NULL 

#include<iostream>
using namespace std;

class node //this will create a node of a linked list
{
    public:
    int data; //this is the data/value part of the node
    node *next; //this is the next pointer of node type as it have to store the address of a node
    node(int value) //creating construtor to assign the value of the node and makes the next pointer store NULL value till it get any node address
    {
        data = value;
        next = NULL;
    }
};

//now to insert values to a linked list we will create a function which inserts the value at the end of linked list that's why this 
//process is called as tail insertion as we are adding element at the end of list 

void insertattail(node * &head, int val)
{
    node *n = new node(val); // this will create a new node which stores the value to add in the linked list and its pointer stores NULL value 
    if(head==NULL) //there might be a possibilty that the linked list does not exist so we will check for the head pointer if it is 
                   //NULL then our newly created node will assigned to head pointer. 
    {
        head = n;
        return;
    }
    node *temp = head;
    while(temp->next!=NULL) //this will traverse the list till the next pointer found NULL
    {
        temp = temp->next; //changing to next node till we find the last node of the list
    }
    temp->next = n; //linking our newly created node in the last by giving the address of it to the next pointer which contains NULL 
}

//function to insert an element at head of the linked list
void insertathead(node* &head,int value)
{
    node *n = new node(value);
    n->next = head;
    head = n;
}

//now a function to print our linked list
void print(node *head)
{
    node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main()
{
    node *head = NULL; //as there is no element in the linked list so head points to the NULL value
    cout<<"----------the linked list formation is like:------------\n";
    cout<<"first node inserted-\n";
    insertattail(head,1);
    print(head);
    cout<<"another node inserted-\n";
    insertattail(head,2);
    print(head);
    cout<<"another node inserted-\n";
    insertattail(head,3);
    print(head);
    cout<<"now inserting an element at the head of linked list-\n";
    insertathead(head,4);
    print(head);
    return 0;
}