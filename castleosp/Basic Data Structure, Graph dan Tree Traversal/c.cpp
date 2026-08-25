// war without reason

#include <bits/stdc++.h>
using namespace std;

#define war_without_reason ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fs first
#define sc second
#define pb push_back
#define int ll

const int inf=LLONG_MAX/2;

void solve() {
    int n,m;cin>>n>>m;
    vector<vector<pii>> adj(n+1);
    vector<int> dist(n+1,inf);
    while(m--) {
        int a,b,c;cin>>a>>b>>c;
        adj[a].pb({b,c});
    }

    priority_queue<pii, vector<pii>, greater<pii>> pq;
    pq.push({0, 1});
    dist[1]=0;

    while(!pq.empty()) {
        auto [curWeight, curNode]=pq.top();
        pq.pop();
        if(dist[curNode]!=curWeight) continue;
        for(auto [nxt, weight]:adj[curNode]) {
            if(dist[nxt]<=dist[curNode]+weight) continue; 
            dist[nxt]=dist[curNode]+weight;
            pq.push({dist[nxt], nxt});
        } 
    }

    for(int i=1;i<=n;i++) cout << dist[i] << ' ';
}

signed main() {
    war_without_reason

    solve();
}
