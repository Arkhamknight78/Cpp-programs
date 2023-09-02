#include<iostream> 
using namespace std;
bool compare(int a,int b){
    return a<b;
}
int bubble_sort(int a[],int n, bool(&compare)(int x,int y))
{
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(compare(a[j],a[j+1])){
                swap(a[j],a[j+1]);
            }
        }
    }
return 0;
}
int main()
{
    int a[]={6,4,3,5,7};
    int n=sizeof(a)/sizeof(int);
    bubble_sort(a,n,compare);
    for (int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

return 0;
}