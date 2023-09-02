#include<iostream>
#include<random>
using namespace std;
int shift(int a[100],int n){
    int temp=a[0];
    for(int i=0;i<n;i++){
        a[i]=a[i+1];
    }
    a[n-1]=temp;
    return a[100];
}
void op(int a[100],int b[100],int n,int m){
    while((m!=0)){
        shift(a,n);
        if(rand()%(1)==1){
            a[n-1]=b[m-1];
            m--;


        }
        else if(rand()%(1)==0){
            a[0]=b[0];
            m--;
        }
    }

}



int SumSubArr(int a[], int cSum[], int len)
{
    int sMax = INT_MIN;
    int wi, wj;
    for (int i = 0; i < len; i++)
    {
        for (int j = i; j <=len; j++)
        {
            int sum = 0;
        sum=cSum[j]-cSum[i-1];
            // cout <<sum<< endl;
            if (sMax < sum)
            {
                sMax = sum;
                wi = i;
                wj = j;
            }
        }
        
    }
return sMax;
}
int fillcSum(int a[],int b[],int n)
{
    for(int i=1;i<n;i++){
        b[i]=b[i-1]+a[i];
    }
return 0;
}
int main()
{
    int a[100],b[100],n,m;
cin>>n>>m;
for(int i=0;i<n;i++){
    cin>>a[i];
}
for(int i=0;i<m;i++){
    cin>>b[i];
}

    int len = sizeof(a) / sizeof(int);
    int cSum[100]={0};
    fillcSum(a,cSum,len);
    SumSubArr(a,cSum,len);


return 0;
}
