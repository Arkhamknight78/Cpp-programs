#include<iostream>
using namespace std;
void subsequences(char *a, char *b, int i, int j){
    if(a[i]=='\0'){
        b[j]='\0';
        cout<<b<<" ";
        return;
    }
    subsequences(a,b,i+1,j);
    b[j]=a[i];
    subsequences(a,b,i+1,j+1);
}
int main()
{
    char a[]={"abc"};
    char b[100];
    subsequences(a,b,0,0);
return 0;
}