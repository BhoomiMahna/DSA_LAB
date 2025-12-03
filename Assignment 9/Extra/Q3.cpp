#include <bits/stdc++.h>
using namespace std;

int networkDelayTime(vector<vector<int>>& t,int n,int k){
    vector<vector<pair<int,int>>> g(n+1);
    for(int i=0;i<t.size();i++) g[t[i][0]].push_back({t[i][1],t[i][2]});
    const long long INF=1e18;
    vector<long long> d(n+1,INF);
    d[k]=0;
    priority_queue<pair<long long,int>,vector<pair<long long,int>>,greater<pair<long long,int>>> pq;
    pq.push({0,k});
    while(!pq.empty()){
        auto p=pq.top();pq.pop();
        long long x=p.first;
        int u=p.second;
        if(x>d[u]) continue;
        for(int i=0;i<g[u].size();i++){
            int v=g[u][i].first;
            long long w=g[u][i].second;
            long long nd=x+w;
            if(nd<d[v]){
                d[v]=nd;
                pq.push({nd,v});
            }
        }
    }
    long long ans=0;
    for(int i=1;i<=n;i++){
        if(d[i]==INF) return -1;
        ans=max(ans,d[i]);
    }
    return ans;
}
