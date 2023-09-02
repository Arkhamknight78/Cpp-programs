#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>A,int N, vector<int>Q){
    int C=Q[1];
    int K=Q[2];


    vector<pair<int,int>>ans;
    for(int i=1;i<=N;i++){
        ans.push_back(make_pair(A[i],i));
    }

    sort(ans.begin(),ans.end());
    int preSum=0;
    int cnt=0;
    for(auto it:ans){
        // cout<<it.first<<','<<it.second<<endl;
        if(std::find(Q.begin()+3,Q.end(),it.second)==Q.end()||Q.size()<=3){
            preSum+=it.first;
            // cout<<"preSum at this point:"<<preSum<<endl;
        if(preSum<=C){
            cnt++;
            // cout<<"Count at this pt:"<<cnt<<endl;
        }
        if(preSum>C){
            return cnt;
        }

        }
    }
return cnt;

}

int main() {
    vector<int>A={-1,7,3,6,8,2,1,4,9,5,10};
    int N=A.size()-1;

    vector<int>Q={-1,20,3,1,2,3};
    cout<<solve(A,N,Q);
}
