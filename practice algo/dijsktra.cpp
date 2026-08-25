#include <bits/stdc++.h>

using namespace std;

#define ti3 tuple<int, int, int>

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;cin>>n>>m;
    vector<vector<pair<int,int>>> adj(n+1);
    for(int i=1;i<=m;i++) {
        int a,b,w;cin>>a>>b>>w;
        adj[a].push_back({b, w});
        adj[b].push_back({a, w});
    }

    priority_queue<ti3, vector<ti3>, greater<ti3>> pq;
    pq.push({0,1,0});
    vector<int> dist(n+1, -1);
    vector<int> prev(n+1, -1);
    dist[1]=0;
    while(!pq.empty()) {
        auto [curw, idx, previdx] = pq.top();
        pq.pop();
        if(dist[idx]!=-1&&idx!=1) continue;
        dist[idx]=curw;
        prev[idx]=previdx;
        for(auto [nxt, w]:adj[idx]) {
            if(dist[nxt]==-1) {
                pq.push({curw+w, nxt, idx});
            }
        }
    }
    vector<int> ans;
    if(dist[n]==-1) {
        cout << -1 << '\n';return 0;
    }
    int now=n;
    while(now!=0) {
        ans.push_back(now);
        now=prev[now];
    }

    for(int i=ans.size()-1;i>=0;i--) {
        cout << ans[i] << ' ';
    }
}
