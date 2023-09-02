#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;

    node(int d){
        data=d;
        next=NULL;
    }
};

void insertAtHead(int data,node*&head){
    node*n=new node(data);
    n->next=head; // adds the address of head to the 'next' member of n
    head=n;// changes the address of head to n
}
int length(node*head){
    int cnt=0;
    while(head!=NULL){
        cnt++;
        head=head->next;
    }
    return cnt;
}
void insertAtTail(int data, node*&head){
    if(head==NULL){
        head=new node(data);
        return;
    }
    node*tail=head;
    while(tail->next!=NULL){
        tail=tail->next; // moves the tailptr to the next node by storing address of next node
    }
    tail->next=new node(data); // adds the data into the 'next' member of tail
}

void insertAtMiddle(int data, node*&head, int p)
{
    if(p==0 && head==NULL)
    {
        insertAtHead(data,head);
    }
    if(p>=length(head))
    {
        insertAtTail(data,head);
    }

    node*temp=head; // temp is a pointer to the head
    int jump=0;
    while(jump<=p-1)
    {
        temp=temp->next;// moves the temp to the next node by storing address of next node
        jump++;
    }

    node*n=new node(data);
    n->next=temp->next; // adds the data from 'next' member of temp node to the 'next' member of n
    temp->next=n; // adds the address of n to the 'next' member of temp


}
void print(node*head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<endl;
}


void deleteAthead(node*&head){
    if(head==NULL){
        return;
    }
    node*temp=head->next;
    delete head;
    head=temp;
}

void deleteAtTail(node*&head){
    if(head==NULL){
        return;
    }
    if(head->next==NULL){
        delete head;
    }
    node*prev=head;
    while(prev->next->next!=NULL){
        prev=prev->next;
    }
    delete prev->next;
    prev->next=NULL;
}

void DeleteAtMid(node*&head, int p){
    if(head==NULL){
        return;
    }
    if(p>length(head)){
        deleteAtTail(head);
    }
    else{
        node*current=head;
        node*temp;
        //take p-2 jumps
        int jump=1;
        while(jump<p && current!=NULL)
        {
            temp=current;
            current=current->next;
            jump++;  
        }
        if(current==NULL){
            return;
        }
        temp->next=current->next; //if we want to delete a node at 3 we are storing the address of node 4 in 2.
       
       delete current;
    }
}


int main()
{
    node*head=NULL;
    insertAtHead(4,head);
    insertAtHead(3,head);
    insertAtHead(7,head);
    insertAtHead(1,head);
    insertAtHead(8,head);
    print(head);
    insertAtTail(5,head);
    print(head);
    insertAtMiddle(2,head,3);
    print(head);
    deleteAthead(head);
    print(head);
    deleteAtTail(head);
    print(head);
    DeleteAtMid(head,2);
    print(head);
return 0;
}