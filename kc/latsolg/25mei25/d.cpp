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

int mini=INT_MAX;

vector<vector<int>> adj;
vector<bool> vis;
vector<int> cost;

void dfs(int node) {
    vis[node]=true;
    mini=min(mini, cost[node-1]);
    for(auto curr:adj[node]) {
        if(!vis[curr]) {
            dfs(curr);
        }
    }
}

void solve() {
    int n,m;cin>>n>>m;
    adj.resize(n+1);
    vis.resize(n+1, false);
    for(int i=0;i<n;i++) {
        int c;cin>>c;
        cost.pb(c);
    }
    for(int i=0;i<m;i++) {
        int a,b;cin>>a>>b;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    ll ans=0;
    for(int i=1;i<=n;i++) {
        if(!vis[i]) {
            if(i!=1) ans+=mini;
            mini=INT_MAX;
            dfs(i);
        }
    }
    ans+=mini;

    cout << ans << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
