#include<iostream> 

using namespace std;
int main()
{
    int i,n;
    cin>>n;
    for(i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        if(n-i!=n){
        for(int k=0;k<2*i-1;k++){
            cout<<" ";
        }
        }
        if(n-i!=n){
        for(int j=n-i;j>0;j--){
            cout<<"*";
        }
        }
        else
        {
            for(int j=n-i;j>1;j--){
            cout<<"*";
        }
        }

        cout<<endl;}


        for(i=1;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<"*";
        }
        if(i!=n-1){
        for(int k=0;k<2*(n-i-1)-1;k++){
            cout<<" ";
        }
        }
        if(i!=n-1){
        for(int j=0;j<i+1;j++){
            cout<<"*";
        }
        }
        else
        {
            for(int j=0;j<i;j++){
            cout<<"*";
        }
        }

        cout<<endl;}
        
        
    


return 0;
}