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

int Waveprint(int a[100][100], int m, int n){
        for(int y=0;y<n;y++){
        if(y%2==0){
        for(int j=0;j<m;j++){
            cout<<a[j][y]<<", ";        //where j represents columns and y represents rows

        }
        
        }
        else
        {
            for(int j=m-1;j>=0;j--){
                cout<<a[j][y]<<", ";

            }
           
        }

    }
return 0;
}

int main()
{
    int n,m;
    cin>>n>>m;
        int a[100][100];
    fillArr(a,n,m);
    Waveprint(a, n, m);
return 0;
}
