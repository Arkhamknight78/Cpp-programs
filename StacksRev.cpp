#include<iostream>
#include<stack>
using namespace std;
// void trans(stack<int>&s1,stack<int>&s2,int n){

//     for(int i=0;i<n;i++){
//         s2.push(s1.top());
//         s1.pop();
//     }
// }
// void Rev1(stack <int>&s1){
//     int n=s1.size();
//     stack<int>s2;

//     for(int i=0;i<n;i++){
//         int x=s1.top(); 
//         s1.pop();

//         trans(s1,s2,n-i-1);

//         s1.push(x);

//         trans(s2,s1,n-i-1);   
//     }
// }
void insertAtBottom(stack <int> &s,int x){ //Dry Run important  
    if(s.empty()){
        s.push(x);
        return;
    }
    int y=s.top();
    s.pop(); 
    insertAtBottom(s,x);
    s.push(y);
}


void RecRev(stack<int>&s){
    if(s.empty()){
        return;
    }
    int x=s.top();
    s.pop();

    RecRev(s);
    insertAtBottom(s,x);

}
void print(stack<int>s){
    while(!s.empty()){
        std::cout<<s.top()<<" ";
        s.pop();
    }
    std::cout<<endl;
}

int main()
{
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    print(s);
    RecRev(s);
    print(s);
return 0;
}