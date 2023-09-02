#include<iostream>
using namespace std;
string keys[]={"","", "ABC","DEF","GHI","JKL","LMO","PQRS","TUV","WXYZ"};
void keypad(char *a,char *b, int i,int j){
    if(a[i]=='\0'){
        b[j]='\0';
        cout<<b<<endl;
        return;
    }
    int digit=a[i]-'0';
    for(int l=0;keys[digit][l]!='\0';l++){
        b[j]=keys[digit][l];
        keypad(a,b,i+1,j+1);
    }
    
}
int main()
{
    char a[100],b[100];
    cin>>a;
    keypad(a,b,0,0);

return 0;
}