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
vector<bool> vis;
vector<int> cat;

int ans=0;

void dfs(int m, int curr, int c) {
    if(c>m) return;
    vis[curr]=true;
    if(adj[curr].size()==1 && curr!=1) ans++;
    for(auto node:adj[curr]) {
        if(!vis[node]) {
            if(!cat[node]) dfs(m, node, 0);
            else dfs(m, node, c+1);
        }
    }
}

void solve() {
    int n,m;cin>>n>>m;
    adj.resize(n+1);
    cat.resize(n+1);
    vis.resize(n+1, 0);
    for(int i=1;i<=n;i++) {
        cin>>cat[i];
    }
    for(int i=0;i<n-1;i++) {
        int a,b;cin>>a>>b;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    dfs(m, 1, cat[1]);

    cout << ans << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
