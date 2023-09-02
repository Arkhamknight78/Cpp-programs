#include<iostream> 

using namespace std;
int main()
{
    int n;
    int j=1;
    cin>>n;
    for(int i=0;i<=n;i++){
        for(int m=0;m<i;m++){
            cout<<j<<"\t";
            j++;
        }
    cout<<endl;
    }
return 0;
}