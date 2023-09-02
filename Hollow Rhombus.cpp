#include<iostream> 

using namespace std;
int main()
{
    int n;
    cin>>n;
    int p=n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<p;j++){
            cout<<" ";

        }
        p--;
        if(i==1 || i==n){
            for(int m=0;m<n;m++){
                cout<<"*";
            }
        }
        else{
            for(int y=1;y<=n;y++){
                if(y==1||y==n){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
        }
    cout<<endl;
    }

return 0;
}