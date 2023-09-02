#include<iostream> 

using namespace std;
int main()
{
    int A[5]={5,3,1,2,4};
    int n=sizeof(A)/sizeof(int);
    int j;
    for(int i=1;i<=n;i++){
        int puc=A[i];
        for(j=i-1;j>=0 && A[j]>puc ;j--){
            A[j+1]=A[j];            
        }
        A[j+1]=puc;
    }
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
return 0;
}