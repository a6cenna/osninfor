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

vector<vector<int>> adj;
vector<bool> vis;

void dfs(int node) {
    vis[node]=1;
    for(auto nxt:adj[node]) {
        if(vis[nxt]) continue;
        dfs(nxt);
    }
}

void solve() {
    int n,m;cin>>n>>m;
    adj.resize(n+1);
    vis.resize(n+1,0);

    for(int i=0;i<m;i++) {
        int x,y;cin>>x>>y;
        adj[x].pb(y);
        adj[y].pb(x);
    }
    vector<int> perlu;
    for(int i=1;i<=n;i++) {
        if(vis[i]) continue;
        perlu.pb(i);
        dfs(i);
    }
    
    cout << perlu.size()-1 << '\n';
    for(int i=1;i<perlu.size();i++) {
        cout << perlu[i-1] << ' ' << perlu[i] << '\n';
    }
}

signed main() {
    war_without_reason

    solve();
}
