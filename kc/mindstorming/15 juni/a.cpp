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
vector<ll> a;

vector<ll> maxx, minn;

void dfs(int curr, int par) {
    vis[curr]=true;
    maxx[curr]=max(a[curr], a[curr]-minn[par]);
    minn[curr]=min(a[curr], a[curr]-maxx[par]);

    for(auto node:adj[curr]) {
        if(!vis[node]) dfs(node, curr);
    }
}

void solve() {
    int n;cin>>n;
    
    adj.assign(n+1, vector<int>());
    vis.assign(n+1, false);

    maxx.resize(n+1);
    minn.resize(n+1);
    a.resize(n+1);

    for(int i=1;i<=n;i++) cin>>a[i];

    for (int i=0;i<n-1;i++) {
        int a,b;cin>>a>>b;

        adj[a].pb(b);
        adj[b].pb(a);
    }

    maxx[0]=0;
    minn[0]=0;
    
    dfs(1, 0);

    for(int i=1;i<=n;i++) {
        cout << maxx[i] << ' ';
    }

    cout << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
