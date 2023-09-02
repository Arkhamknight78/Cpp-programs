#include<iostream> 
#include<climits>
using namespace std;
int main()
{
    int n1,n2,smallest;
    cin>>n1>>n2;
    smallest=INT_MAX;
    for(int i=1;i<smallest;i++){
        if(i%n1==0 && i%n2==0){
            cout<<i<<endl;
            break;
        }
    }

return 0;
}