#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class DSU{
    int *parent;
    int *rank;

    public:
    DSU(int n){
        parent=new int[n];
        rank=new int[n];

        for(int i=0;i<n;i++){
            parent[i]=-1;
            rank[i]=1;
        }
    }

    int find_set(int x){
        if(parent[x]==-1){
            return parent[x];
        }
        return parent[x]=find_set(parent[x]);
    }
    void unite(int x,int y){
        int S1=find_set(x);
        int S2=find_set(y);

        if(S1<S2){
            parent[S1]=S2;
            rank[S1]+=rank[S2];
        }
        else{
             parent[S2]=S1;
            rank[S2]+=rank[S1];
        }
    }
};

class Graph{
public:
    vector<vector<int>> l;
    int V;
    
    Graph(int V){
        this->V=V;
    }

    void addEdgeList(int x,int y,int w){
        l.push_back({w,x,y});
    }

    int kruskal(){
        sort(l.begin(),l.end());
        DSU s(V);
        int ans=0;
        for(auto edge : l){
            int w=edge[0];
            int x=edge[1];
            int y=edge[2];

          
            if(s.find_set(x)!=s.find_set(y)){
                s.unite(x,y);
                ans+=w;
            }
            
        }
        return ans;
    }
};

int main() {
    Graph g(16);

    g.addEdgeList(10,1,2);
    g.addEdgeList(12,1,3);
    g.addEdgeList(9,3,2);
    g.addEdgeList(3,3,5);
    g.addEdgeList(3,6,5);
    g.addEdgeList(1,3,6);
    g.addEdgeList(8,2,4);
    g.addEdgeList(5,4,8);
    g.addEdgeList(10,4,6);
    g.addEdgeList(8,7,4);
    g.addEdgeList(9,7,8);
    g.addEdgeList(11,9,8);
    g.addEdgeList(2,9,7);

    cout<<g.kruskal()<<endl;

}
