#include<iostream>
#include<queue>
using namespace std;
template<typename T>
class stack{
    queue<T>q1,q2; //we will push data always in q1 and q2 will always be empty even after pop when q2 is filled we will swap q1 and q2

    public:
    void push(T data){
        q1.push(data);
    }
    void pop(){
        if(q1.empty()){
            return;
        }
    while(q1.size()>1){
        T element=q1.front();
        q1.pop();
        q2.push(element);
    }
    T elementLast=q1.front();
    q1.pop();
    swap(q1,q2);
    }

    T top(){
        while(q1.size()>1){
            T element=q1.front();
            q1.pop();
            q2.push(element);
        }
        T elementLast=q1.front();
        q1.pop();
        q2.push(elementLast);

        swap(q1,q2);
        return elementLast;
    }
    int size(){
        return q1.size()+q2.size();
    }
    bool empty(){
        return size()==0;   
        }
};
int main()
{
    stack<char> s;
    s.push(65);
    s.push(66);
    s.push(69);
    s.push(79);

    while(!s.empty()){
        cout<<s.top()<<" " ;
        s.pop();
    }
return 0;
}