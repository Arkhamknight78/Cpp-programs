#include <iostream>
#include <climits>
using namespace std;
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
    cout<<sMax<<endl;

    for (int i = wi; i <=wj; i++)
    {
        cout << a[i] << " ";
        
    }
    cout<<endl;
    // for (int i = wi; i < wj; i++)
    // {
    //     cout << cSum[i] << " ";
    // }

    return 0;

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
    int a[] = {1, -2, 3, 4, -5, 6};
    int len = sizeof(a) / sizeof(int);
    int cSum[100]={0};
    fillcSum(a,cSum,len);
    for (int i = 0; i < len; i++)
    {
        cout << cSum[i] << " ";
    }
    SumSubArr(a,cSum,len);

    return 0;
}