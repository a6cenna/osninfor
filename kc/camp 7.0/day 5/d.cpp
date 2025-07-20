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

const int N=2e5;

vector<vector<int>> adj;
vector<bool> vis;
vector<int> a;

int ans=0;
int m;

void dfs(int curr, int cat) {
    if(cat>m) return;
    vis[curr]=true;
    if(curr!=1&&adj[curr].size()==1) ans++;
    for(auto node:adj[curr]) {
        if(!vis[node]) {
            if(a[node]) dfs(node, cat+1);
            else dfs(node, 0);
        }
    }
}

void solve() {
    int n;cin>>n>>m;
    adj.resize(n+1);
    vis.resize(n+1);
    a.resize(n+1);
    for(int i=1;i<=n;i++) {
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++) {
        int a,b;cin>>a>>b;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    dfs(1, a[1]);

    cout << ans << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
