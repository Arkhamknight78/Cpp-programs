#include<iostream>
using namespace std;
void buildTri(int n)
{
    if(n==0)
    {
    return;
    } 
    else{
    buildTri(n-1);
    
    for(int j=0;j<=n-1;j++)
    {
        cout<<"*"<<"\t";
    }
    cout<<endl;
    }
        
}
int main()
{
    int n=5;
    buildTri(n);
return 0;
}