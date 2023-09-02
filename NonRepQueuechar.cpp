#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<char> q;
    char ch;
    int freq[100]={0}; //we ll map every character to its frequency in the string by the position of them with respect to 'a' in alphabetical order

    int i=0;
    char arr[100];
    cin>>ch; 
    while(ch!='.'){
        //insert in the q and d
        q.push(ch);
        freq[ch-'a']++;
        //query
        while(!q.empty())
        {
        if(freq[q.front()-'a']>1){
            q.pop();
        }
        else{
            cout<<q.front()<<endl;
            break;
        }
        
        }
        if(q.empty()){
            cout<<-1<<endl;
        }
        cin>>ch;

    }


return 0;
}