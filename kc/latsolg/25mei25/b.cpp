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

vector<bool> vis;
vector<vector<int>> adj;
vector<int> x,y;

void dfs(int i) {
    vis[i]=true;
    for(auto node:adj[i]) {
        if(!vis[node]) {
            dfs(node);
        }
    }
}

void solve() {
    int n;cin>>n;
    vis.resize(n+1, 0);
    adj.resize(n+1);
    x.resize(n+1);
    y.resize(n+1);
    for(int i=1;i<=n;i++) {
        cin>>x[i]>>y[i];
        for(int j=1;j<i;j++) {
            if(x[i]==x[j] || y[i]==y[j]) {
                adj[i].pb(j);
                adj[j].pb(i);
            }
        }
    }
    int ans=-1;
    for(int i=1;i<=n;i++) {
        if(!vis[i]) {
            ans++;
            dfs(i);
        }
    }

    cout << ans << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
