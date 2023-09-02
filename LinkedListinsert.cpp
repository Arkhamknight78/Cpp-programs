#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int d)
    {
        data = d;
        next = NULL;
    }
};

int length(node *head)
{
    int cnt = 0;
    while (head != NULL)
    {
        cnt++;
        head = head->next;
    }
    return cnt;
}

void insertatTail(node *&head, int d)
{
    if (head == NULL)
    {
        head = new node(d);
        return;
    }
    node *tail = head;
    while (tail->next != NULL)
    {
        tail = tail->next;
    }
    tail->next = new node(d);
}

void insertatHead(node *&head, int d)
{
    if (head == NULL)
    {
        head = new node(d);
        return;
    }
    node *n = new node(d); // dynamic allocation
    n->next = head;
    head = n;
}

void insertatMiddle(node *&head, int d, int p)
{

    if (p == 0 || head == NULL)
    {
        insertatHead(head, d);
        return;
    }
    else if (p > length(head))
    {
        insertatTail(head, d);
        return;
    }
    else
    {
        node *temp = head;
        int jump = 1;
        while (jump <= p - 1)
        {
            temp = temp->next;
            jump++;
        }

        node *n = new node(d);
        n->next = temp->next;
        temp->next = n;
    }
}

void print(node *head)
{
    while (head != NULL)
    {
        cout << (head->data) << "->";
        head = head->next;
    }
    return;
}

ostream &operator<<(ostream &os, node *head)
{
    print(head);
    return os;
}
node *take_input()
{
    int d;
    node *head = NULL;
    cin >> d;
    while (d != -1)
    {
        insertatHead(head, d);
        cin >> d;
    }
    return head;
}
istream &operator>>(istream &is, node *&head)
{
    head = take_input();
    return is;
}
void reverse(node *&head)
{
    node *p = NULL;
    node *c = head; // time complexity O(N) and O(1) Stack space
    node *n;
    while (c != NULL)
    {
        n = c->next;
        c->next = p;
        p = c;
        c = n;
    }
    head = p;
}
node *recReverse(node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    node *smallHead = recReverse(head->next);
    node* temp=smallHead;
   while(temp->next!=NULL){
    temp=temp->next;
   }
    head->next = NULL;
    temp->next=head;
    return smallHead;
}
int midpt(node*head)
{
    if(head==NULL || head->next==NULL){
        return head->data;
    }
    node*S=head;
    node*F=head->next;
    while(F!=NULL && F->next!=NULL){
        S=S->next;
        F=F->next->next;

    }
    return S->data;
}
int Kthnode(node*head, int k)
{
    node*F=head;
    node*S=head;
   
        for(int i=0;i<k;i++)
        {
            F=F->next;
        }
        cout<<F->data<<endl; 
    while(F->next!=NULL){
        F=F->next;
        S=S->next;
    }
    return S->data;
}

node* merge(node*a, node*b){
    node*c;
    if(a==NULL){
        return b;
    }
    if(b==NULL){
        return a;
    }

    if(a->data < b->data){
        c=a;
        c->next=merge(a->next,b);
    }
    else{
        c=b;
        c->next=merge(a,b->next);
    }
    return c;
}

int main()
{
    int d;
    node *head = NULL;
    node *head2 = NULL;
    // insertatHead(head2, 9);
    // insertatHead(head2, 7);
    // insertatHead(head2, 6);
    // insertatHead(head2, 2);
    // insertatHead(head2, 0);
    // insertatMiddle(head2, 87, 2);
    // insertatTail(head2, 975);
    // cin>>d; //whats the issue?
    // head=take_input();
    cin >> head;
    cin >> head2;
    head = recReverse(head);
    head2 = recReverse(head2);

    cout << head;
    cout << endl;
    cout << head2;
    cout << endl;
    
    cout << merge(head,head2);
    // int mid=midpt(head);
    // cout << mid<<endl;
    // int kth=Kthnode(head,3);
    // cout<<kth<<endl;
}