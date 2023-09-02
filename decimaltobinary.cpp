#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int t=abs(n);
    vector<int> ans;
    

    while(t>0){
        int b=t%2;
        ans.push_back(b);
        t=t/2;
    }
     if(n<0){
        ans.push_back(1);
    }
    reverse(ans.begin(),ans.end());
   
    for(auto x:ans){
        cout<<x;
    }
return 0;
}