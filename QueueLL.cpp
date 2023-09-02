#include<iostream>
using namespace std;

template<typename U>
class node{
    public:
    U data;
    node*next;

    node(U d){
        data=d;
        next=NULL;
    }
};
template <typename T>
class Queue
{
    node<T>* head;
    node<T>* tail;
    int cs;

    public:
    Queue(){
        head=NULL;
        tail=NULL;
        cs=0;
    }

    void push(T data){
        node<T>* n=new node(data);
            if(head==NULL){
                cs=1;
                head=tail=n;
            }
            else{
                tail->next=n;
                tail=n;
                cs++;
            }
        }
    

    void pop(){
        if(cs==0){
            return;

        }
        else{
            head=head->next;
            cs--;
        }

    }

    T front(){
        return head->data;
    }
    bool empty(){
        return cs==0;
    }
};


int main()
{
    Queue<char> q;
    for(int i=97;i<=122;i++){
        q.push(i);
    }

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }

return 0;
}