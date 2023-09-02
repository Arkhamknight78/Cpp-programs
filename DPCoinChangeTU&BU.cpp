#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int CoinChange(int N,int T, int dp[],int coins[]){
    if(N==0){
        return 0;
    }
    if(dp[N]!=0){
        return dp[N];
    }
    int ans=INT_MAX;
    for(int i=0;i<T;i++){
        if(N-coins[i]>=0){
            int subpro=CoinChange(N-coins[i],T,dp,coins);
            ans=min(ans,subpro+1);
        }
    }
    dp[N]=ans;
    return dp[N];
}
int CoinChangeBU(int N,int T,int coins[]){
    int dp[100]={0};

    for(int i=1;i<=N;i++){
        dp[i]=INT_MAX;
        for(int j=0;j<T;j++){
            if(i-coins[j]>=0){
                dp[i]=min(dp[i],dp[i-coins[j]]+1);
            }
        }
    }
    return dp[N];
}

int main() {
    int dp[100]={};
    int coins[]={1,3,5};
    int N=8;
    int T=3;
    cout<<CoinChangeBU(N,T,coins);

    return 0;
}