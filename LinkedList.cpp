#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node*next;

    node(int d){
        data=d;
    }
};
int length(node*head){
    int cnt=0;
    while(head!=NULL){
        cnt++;
        head=head->next;
    }
    return cnt;

}

void InsertatHead(node*&head, int d){
    node*n=new node(d);
    n->next=head;
    head=n;
}
void inMid(node*&head,int d,int p){
    int len=length(head);
    // if (p>len){
    //     AtTail(head,d);
    // }
    if(head==NULL){
        InsertatHead(head,d);
    }
    int jump=1;
    node*temp=head;
    while(jump<=p&&temp!=NULL){
        temp=temp->next;
        jump++;
    }
   node*n=new node(d);
   n->next=temp->next;
   temp->next=n;
}
void print(node*head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<endl;
}


int main()
{
    node*head=NULL;
    InsertatHead(head,3);
    InsertatHead(head,2);
    InsertatHead(head,4);
    inMid(head,6,2);
    print(head);
return 0;
}