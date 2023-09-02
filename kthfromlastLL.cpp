#include<iostream>
using namespace std;

class node{
public:
int data;
node* next;

node(int d){
    data=d;
    next=NULL;
}
};

void kthfromlast(node* head, int k){
    if(head==NULL){
        return;
    }
    else if(k==0){
        cout<<head->data;
        return;
    }

    node* fast=head;
    node* slow=head;

    while(k>0){
        fast=fast->next;
        k--;
    }
    while(fast!=NULL){
        fast=fast->next;
        slow=slow->next;
    }

    cout<<slow->data;
    return;
}

node* insert_head(node*&head, int d){
    if(head==NULL){
        head=new node(d);
        return head;
    }
    node* n=new node(d);
    n->next=head;
    head=n;
    return n;
}
node *recReverse(node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    node *smallHead = recReverse(head->next);
    head->next->next = head;
    head->next = NULL;
    return smallHead;
}

void take_input(node*&head){
    int d;
    cin>>d;
    while(d!=-1){
        cin>>d;
        head=insert_head(head,d);
    }
    head=recReverse(head);
    
}
void print(node* head){
     if(head==NULL){
        return;
    }
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

int main()
{
    node* head=NULL;
    take_input(head);

    int k;
    cin>>k;
    kthfromlast(head,k);


return 0;
}