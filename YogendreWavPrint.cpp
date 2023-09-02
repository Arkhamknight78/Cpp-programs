#include<iostream>
using namespace std;
int fillArr(int a[100][100],int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
return 0;
}
int WavePrint(int a[100][100],int m, int n){
    int i=0;
    int j=0;
    while((i<m)&&(j<n)){
          while(j<n){
            cout<<a[i][j]<<", ";
            j++;
          }
          i++;
          j--;
          while(j!=-1){
            cout<<a[i][j]<<", ";
            j--;
          }
          i++;
          j++;
    }
    cout<<"END"<<endl;
    return 0;
}
int main()
{
    int n,m;
    cin>>n>>m;
        int a[100][100];
    fillArr(a,n,m);
    WavePrint(a, n, m);
return 0;
}