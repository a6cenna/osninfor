// author: sofwant || a6cenna
// created at 05/04/2025
// suffering leaves suffering leaves.

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
vector<vector<int>> reverse_adj;
vector<bool> vis;

void dfs(int x) {
    if(vis[x]) return;
    vis[x]=true;
    for(auto node:adj[x]) {
        dfs(node);
    }
}

void dfs_rev(int x) {
    if(vis[x]) return;
    vis[x]=true;
    for(auto node:reverse_adj[x]) {
        dfs_rev(node);
    }
}

void solve() {
    int n,m;cin>>n>>m;

    adj.resize(n+1);
    reverse_adj.resize(n+1);
    vis.resize(n+1);

    for(int i=0;i<m;i++) {
        int a,b;cin>>a>>b;
        adj[a].pb(b);
        reverse_adj[b].pb(a);
    }
    dfs(1);
    // for(int i=2;i<=n;i++) {
    //     if(!vis[i] || adj[i].empty()) {
    //         cout << "NO" << '\n';
    //         cout << i << ' ' << 1 << '\n';
    //         return;
    //     }
    // }
    for(int i=1;i<=n;i++) {
        if(!vis[i]) {
            cout << "NO" << '\n';
            cout << 1 << ' ' << i << '\n';
            return;
        }
    }
    fill(vis.begin(), vis.end(), false);
    dfs_rev(1);
    for(int i=1;i<=n;i++) {
        if(!vis[i]) {
            cout << "NO" << '\n';
            cout << i << ' ' << 1 << '\n';
            return;
        }
    }
    cout << "YES" << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
