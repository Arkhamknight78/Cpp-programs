#include<iostream>
using namespace std;
int strtoint(string a, int n){
    if(n==0){
        return 0;
    }
    int digit=a[n-1]-'0';
    int SA=strtoint(a,n-1);
    int BA=SA*10+digit;
    return BA;
}
int main()
{
    string a="4329";
    int n=a.size();
    cout<<strtoint(a,n)<<endl;
return 0;
}