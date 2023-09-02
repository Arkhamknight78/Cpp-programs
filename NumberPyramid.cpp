#include<iostream> 

using namespace std;
int main()
{
    int n;
    cout<<"Enter no of rows"<<endl;
    cin>>n;
    int p=n;
    for(int i=1;i<n;i++){
        
        for(int j=1;j<=p;j++){
            cout<<"  ";
           
        
        }
        p--;
        
        for(int m=1;m<=(2*i-1);m++){
            cout<<m<<' ';
        }
    cout<<endl;    
    }

return 0;
}