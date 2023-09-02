#include<iostream>
#include<stack>
using namespace std;
bool isvalid(char* e){
    
    stack<char> s;
    if(e[0]==')'){
        return false;
    }
    if(e[0]=='('){
        s.push(e[0]);
    }
    int i=0;
    while(e[i]!='\0'){
        if(e[i]=='('){
            s.push(e[i]);
        }
        else if(e[i]==')'){
            if(s.empty()){
                return false;
            }
            s.pop();
        }
    }
    return s.empty();
}

int main()
{
return 0;
}