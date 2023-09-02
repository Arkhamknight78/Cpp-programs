#include<iostream> 

using namespace std;
int main()
{
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    int largest=max(a,max(b,max(c,max(d,e))));
    cout<<largest;
return 0;
}