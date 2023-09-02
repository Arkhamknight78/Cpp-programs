#include<iostream>
#include<forward_list>
#include<algorithm>
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

node* merge(node*a,node*b){
    if(a==NULL){
        return b;
    }
    if(b==NULL){
        return a;
    }
    node* c;
    if(a->data<= b->data){
        c=a;
        c->next=merge(a->next,b);
    }
    if(a->data>=b->data){
        c=b;
        c->next=merge(b->next,a);
    }

    return c;
}

node* mergesort(node*head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    node* mid=head;
    node* fast=head->next;

    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        mid=mid->next;
    }
    node* a=head;
    node* b=mid->next;
    mid->next=NULL;

    a=mergesort(a);
    b=mergesort(b);

    node* c=merge(a,b);
    return c;
}


void segregateOddEven(node*&head){
    node* evenstart=NULL;
    node* evenend=NULL;
    node* oddstart=NULL;
    node* oddend=NULL;
    node* curr=head;
    node* nxt=curr->next;
    while(curr!=NULL){
        int val=curr->data;

        if(val%2!=0){
            if(oddstart==NULL){
                oddstart=curr;
                oddend=oddstart;
            }
            else{
                oddend->next=curr;
                oddend=oddend->next;
            }
        }

        if(val%2==0){
            if(evenstart==NULL){
                evenstart=curr;
                
                evenend=evenstart;
            }
            else{
                evenend->next=curr;
                evenend=evenend->next;
            }
        }
        curr->next=NULL;
        curr=nxt;
        if(nxt!=NULL){
            nxt=nxt->next;
        }
    }
    if(oddstart==NULL) 
    head=evenstart;
    else{
    head=oddstart;
    }

    oddend->next=evenstart;
    evenend->next=NULL;
    
    head=oddstart;
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
    int n;
    cin>>n;
    node* head=NULL;
    take_input(head,n);
    segregateOddEven(head);
    print(head);
    



return 0;
}