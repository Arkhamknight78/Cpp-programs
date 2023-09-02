#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int minSteps(int n,int dp[]){
    if(n==1){
        return 0;
    }
    if(dp[n]!=0){
        return dp[n];
    }
    int op1,op2,op3=INT_MAX;
    if(n%3==0){
        op1=minSteps(n/3,dp)+1;
    }
    if(n%2==0){
        op1=minSteps(n/2,dp)+1;
    }
    op3=minSteps(n-1,dp)+1;
    int ans=min(min(op1,op2),op3);
    return dp[n]=ans;


}

int main() {
    int n;
    cin>>n;
    int dp[100]={0};
    cout<<minSteps(n,dp);
}
