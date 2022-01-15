//In this question we are given a linked list we have to change the node values of the list as the sum of ith node and the value of node (n-(k-1))
//where n is the total number of nodes in the linked list. for example -  linked list is 5->3->5->10->11 then the output will be like: 
//16->13->5->13->16 and if linked list is : 4->2->3->10->12->13 then output should be 17->14->13->13->14->17


#include<iostream>
#include<vector>
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

void insertattail(node * &head, int val)
{
    node *n = new node(val);  
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

//now a function to print our linked list
void print(node *head)
{
    node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<endl;
}

void change_list(node *head){
    vector<int> v;
    node *temp = head;
    while(temp->next!=NULL)
    {
        v.push_back(temp->data);
        temp = temp->next;
    }
    v.push_back(temp->data);
    cout<<v.size()<<endl;
    node *start = head;
    int i=0;
    while(i!=v.size()){
        if((v.size()-(i+1))==i)
        {
            cout<<head->data<<"->";
        }
        else{
        head->data = v[i] + v[v.size()-(i+1)];
        cout<<head->data<<"->"; 
        head = head->next;
        }
        i++;
    }
}

int main()
{
    node *head = NULL; //as there is no element in the linked list so head points to the NULL value
    cout<<"----------the linked list formation is like:------------\n";
    // cout<<"first node inserted-\n";
    // insertattail(head,1);
    // print(head);
    // cout<<"another node inserted-\n";
    // insertattail(head,2);
    // print(head);
    // cout<<"another node inserted-\n";
    // insertattail(head,5);
    // print(head);
    // cout<<"another node inserted-\n";
    // insertattail(head,11);
    // print(head);
    // cout<<"another node inserted-\n";
    // insertattail(head,13);
    // print(head);
    int size,ele;
    cout<<"enter how many numbers do you want in the linked list: ";
    cin>>size;
    cout<<"enter the linked list values: ";
    for(int i=0;i<size;i++)
    {
        cin>>ele;
        insertattail(head,ele);
    }
    cout<<"your linked list is: ";
    print(head);
    cout<<"your list after the changes is: ";
    change_list(head);
    return 0;
}