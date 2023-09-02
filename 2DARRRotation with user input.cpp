#include <iostream>
using namespace std;
int fillArr(int a[100][100],int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
return 0;
}
int Transpose(int a[100][100], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < m; j++)
        {
            swap(a[i][j], a[j][i]);
        }
    }
    return 0;
}
int InvertArr(int a[100][100], int n, int m)
{
    int col;

    for (col = 0; col < m; col++)
    {
        int i = 0, j = m - 1;
        while (i < j)
        {
            swap(a[i][col], a[j][col]);
            i++;
            j--;
        }

    }
	
    return 0;
}
int main()
{
    int val = 1;
    int a[100][100];
    int m, n;
    cin >> n;
    fillArr(a,n,n);
    Transpose(a,n,n);
	InvertArr(a,n,n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
	return 0;
}