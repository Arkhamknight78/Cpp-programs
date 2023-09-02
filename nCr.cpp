#include<iostream> 

using namespace std;
int fac(int a);
int nCr(int n, int r);

int main()
{
    int n,r;
    cin>>n;
    cin>>r;
    nCr(n,r);

return 0;
}
int fac(int a){
    if(a==1){
        return 1;
    }
    if(a==0){
        return 0;
    }
    int ans=1,j;
    for(j=1;j<=a;j++){
        ans*=j;
    }
    return ans;
}
int nCr(int n,int r){
    int A=fac(n)/(fac(r)*fac(n-r));
    cout<<A<<endl;
return 0;
}