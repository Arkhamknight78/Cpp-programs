#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int n;
	int a[100];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int m;
	//Enter target
	cin>>m;
	bool ptr=binary_search(a,a+n,m);
	if(ptr==1){
        int *lb=lower_bound(a,a+n,m);
        int indx=lb-a;
        cout<<indx<<endl;

    }
	return 0;
}