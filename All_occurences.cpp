#include<iostream>
using namespace std;
void Allocc(int *a, int n,int i,int k){
    if(i==n){
        return;}
        if(a[i]==k){
            cout<<i<<" ";}
        Allocc(a,n,i+1,k); 
}
int main()
{
    int a[]={1,2,4,5,1,6,8,1};
    Allocc(a,8,0,1);
return 0;
}