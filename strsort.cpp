#include<iostream>
#include<algorithm>
using namespace std;
int PrintArr(string a[], int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
return 0;
}
int main()
{
    int n;
    cin>>n;
    string a[4];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    next_permutation(a,a+n);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<=n;j++){
        if(a[i]<=a[j])
        {
            if((a[i].length())<(a[j].length()))
            {
            swap(a[i],a[i+1]);
            }
        }
        }
    }
    PrintArr(a,n);

return 0;
}