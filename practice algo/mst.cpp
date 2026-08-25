#include <bits/stdc++.h>

using namespace std;

#define ti3 tuple<int,int,int>

void solve() {
    int n,m;cin>>n>>m;
    vector<vector<pair<int,int>>> adj(n+1);
    vector<int> dist(n+1,-1);
    for(int i=1;i<=m;i++) {
        int a,b,w;cin>>a>>b>>w;
        adj[b].push_back({a,w});
        adj[a].push_back({b,w});
    }
    priority_queue<ti3, vector<ti3>, greater<ti3>> pq;
    pq.push({0, 1, 0});
    dist[1]=0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}
