#include<iostream>
#include<climits>
using namespace std;
void fillArr(int a[],int n){
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
    cout<<endl;
}

int main() {
	int n;
	cin>>n;
    cout<<endl;
	int a[n];
	fillArr(a,n);
	int i,m;
    cin>>m;
    int Y=0;

    for(i=0;i<n;i++){
        if(a[i]==m)
        {
            Y=1;
            break;
        }
        
    }
    if(Y==1){
        cout<<i<<endl;
    }
    else if(Y==0){
        cout<<-1<<endl;
    }

	return 0;
}