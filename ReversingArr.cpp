#include<iostream>
using namespace std;
void fillArr(int a[],int n){
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
    cout<<endl;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    int b[n];
    fillArr(a,n);
    for(int j=n-1;j>=0;j--){
        cout<<a[j]<<endl;
    }
return 0;
}