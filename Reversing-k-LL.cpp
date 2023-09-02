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
void rev(node*&head){
    node* c=head;
    node* p=NULL;
    node* n;
    while(c!=NULL){
        n=c->next;
        c->next=p;
        p=c;
        c=n;
    }
    head=p;
}
node* reverse(node*head, int k){
    if(head->next==NULL || head==NULL){
        return head;
    }

    node* c=head;
    node* p=NULL;
    node* n;
    int count=0;
    while(c!=NULL && count<k){
        n=c->next;
        c->next=p;
        p=c;
        c=n;
        count++;
    }
    if(c!=NULL){
        head->next=reverse(c,k);
    }
    head=p;
    return p;
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
void take_input(node*&head, int n){
    int d;
    while(n>0){
        cin>>d;
        head=insert_head(head,d);
        n--;
    }
}
int main()
{
    int n,k;
    cin>>n>>k;
    node* head=NULL;
    take_input(head,n);
    head=reverse(head,k);
    rev(head);
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
return 0;
}