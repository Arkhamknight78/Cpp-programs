#include<iostream> 
#include<climits>
using namespace std;
int main()
{
    int n,m,ans=0;
    cin>>n;  
    for(int i=0;i<n;i++){
        cin>>m;
        ans=m^ans;

    }  
    cout<<"unique Number:"<<(ans)<<endl;
return 0;
}