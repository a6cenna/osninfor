// author: sofwant || a6cenna

#include <bits/stdc++.h>
using namespace std;

#define suffering_leaves_suffering_leaves ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fs first
#define sc second
#define pb push_back

vector<vector<int>> adj;

void solve() {
    int n,m;cin>>n>>m;
    adj.resize(n+1);
    while(m--) {
        int x,y;cin>>x>>y;
        adj[x].pb(y);
        adj[y].pb(x);
    }
    priority_queue<int,vector<int>,greater<int>> pq;
    pq.push(1);
    bool vis[n+1];
    memset(vis, 0, sizeof(vis));
    while(!pq.empty()) {
        int cur=pq.top();
        pq.pop();
        if(vis[cur]) continue;
        vis[cur]=1;
        for(auto node:adj[cur]) {
            if(!vis[node]) pq.push(node);
        }
        cout << cur << ' ';
    }
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
