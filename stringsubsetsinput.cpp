#include <iostream>
using namespace std;
void generate_strings(char *a, char *b, int n, int i, int j)
{
    if(a[i]=='\0'){
        b[j]='\0';
        cout<<b<<endl;
        return;
    }
    int digit=a[i]-'0';
    for(int l=0;l<i;l++){
        b[j]='A'+digit-1;
        
    }

}
int main()
{
    char a[]="abc";
    char b[100];
    generate_strings(a,b,3,0,0);
    return 0;
}