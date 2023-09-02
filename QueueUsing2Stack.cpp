#include<iostream>
#include<stack>
using namespace std;


template<typename T>
class queue{
    stack<T> s1,s2;

    public:
    void push(T data){
        s1.push(data);
    }
    void popQ(){
        if(s1.empty()){
            return;
        }
        while(s1.size()>1){
            T element=s1.top();
            s1.pop();
            s2.push(element);
        }
        T lastElement=s1.top();
        s1.pop();

        while(!s2.empty()){
            T element=s2.top();
            s2.pop();
            s1.push(element);
        }
    }
     bool empty(){
        return s1.size()==0;
    }
    
    int size(){
        return s1.size()+s2.size();
    }
    
    T front(){
        if(s1.empty()){
            return 0;
        }
        while(s1.size()>1){
            T element=s1.top();
            s1.pop();
            s2.push(element);
        }
        T lastElement=s1.top();
        

        while(!s2.empty()){
            T element=s2.top();
            s2.pop();
            s1.push(element);
        }

        return lastElement;
    }
   
};

int main()
{
    queue<char>q;
    q.push(65);
    q.push(68);
    q.push(75);
    q.push(95);
    
    while(!q.empty()){
        std::cout<<q.front()<<" ";
        q.popQ();
    }
    

    return 0;
}