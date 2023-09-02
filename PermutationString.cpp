#include<iostream>
#include<set>
#include<string>
using namespace std;
void permute(char *a,int i,set<string> &s){
    //base case
    if(a[i]=='\0'){
        // cout<<a<<endl;
        // return;
        string t(a);
        s.insert(t);
    }
    for(int j=i;a[j]!='\0';j++){
        swap(a[j],a[i]);
        permute(a,i+1,s);
        swap(a[j],a[i]); //back-tracking
        }
}
int main()
{
    set<string> s;
    char a[]="Vinayak";
    permute(a,0,s);
    for(auto str:s){
        cout<<str<<endl;
    }
return 0;
}