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
vector<bool> vis;
vector<bool> closed;
int cnt=0;

void dfs(int x) {
    if(vis[x] || closed[x]) return;
    vis[x]=true;
    cnt++;
    for(auto node:adj[x]) {
        dfs(node);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("closing.in", "r", stdin);
    freopen("closing.out", "w", stdout);

    int n,m;cin>>n>>m;
    adj.resize(n+1);
    vis.resize(n+1);
    closed.resize(n+1);
    for(int i=0;i<m;i++) {
        int a,b;cin>>a>>b;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    int clor[n];
    for(int i=0;i<n;i++) cin>>clor[i];
    dfs(1);
    if(cnt==n) {
        cout << "YES" << '\n';
    }
    else {
        cout << "NO" << '\n';
    }
    for(int i=0;i<n-1;i++) {
        closed[clor[i]]=true;
        fill(vis.begin(), vis.end(), false);
        cnt = 0;
        dfs(clor[n-1]);

        if(cnt==n-i-1) {
            cout << "YES" << '\n';
        }
        else cout << "NO" << '\n';
    }
}
