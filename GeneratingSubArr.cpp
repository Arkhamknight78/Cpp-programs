#include<iostream>
using namespace std;
int GeneratingSubArr(int a[],int len){
    for(int i=0;i<len;i++){
        for(int j=i;j<len;j++){
            for(int k=i;k<=j;k++){
            cout<<a[k]<<" ";
            }
            cout<<endl;
        }
    
    }
return 0;
}
int main()
{
    int a[]={1,2,3,4,5,6};
    int len=sizeof(a)/sizeof(int);
    GeneratingSubArr(a,len);

return 0;
}