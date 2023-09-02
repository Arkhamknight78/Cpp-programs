#include<iostream>
using namespace std;
void bubble(int *a, int n,int i){
    if(i==n-1){
        return;
    }
    for(int j=0;j<n-1-i;j++){
        if(a[j]>a[j+1]){
            swap(a[j],a[j+1]);
    }
    }
    bubble(a,n,i+1);
}
int main()
{
    int A[6] = {5, 7, 2, 6, 4, 9};
    int len = sizeof(A) / sizeof(int);
    cout << "unsorted array" << endl;
    cout << endl;
    cout << endl;
    bubble(A, len,0);
    for (int i = 0; i<len; i++)
    {
        cout << A[i] <<" ";
    }
    return 0;
}