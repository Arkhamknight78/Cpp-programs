#include<iostream>
using namespace std;

class node{

    public:
    int data;
    node* next;

    node(int d)
    {
        data=d;
        next=NULL;
    }
};

node* insert_head(node* &head,int d){
    if(head==NULL){
        head=new node(d);
        return head;
    }
    node* n=new node(d);
    n->next=head;
    head=n;
    return head;
}

void take_input(node*&head, int n){
    int d;
    while(n>0){
        cin>>d;
        head=insert_head(head,d);
        n--;
    }
}

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
void print(node* head){
     if(head==NULL){
        return;
    }
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<endl;
}
// ostream& operator<<(ostream &os,node* head){
//     print(head);
//     return os;
// }
// istream& operator>>(istream &is,node* head){
//     take_input(head);
//     return is;
// }

void reverse(node*&head){
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


int main()
{
    int T;
    cin>>T;
    while(T--){
        node*a=NULL;
        node*b=NULL;
        int n1,n2;
        cin>>n1;
        take_input(a,n1);
        reverse(a);
        cout<<"next input"<<endl;
        cin>>n2;
        take_input(b,n2);
        reverse(b);
        node* c=merge(a,b);
        print(c);
    }

return 0;
}   