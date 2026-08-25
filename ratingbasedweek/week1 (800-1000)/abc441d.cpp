// in the pool

#include <bits/stdc++.h>
using namespace std;

#define suffering_leaves_suffering_leaves ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fs first
#define sc second
#define pb push_back

vector<vector<pii>> adj;
set<int> v;
int l,s,t;

void dfs(int node, int cur, int cost) {
    if(cost>t||cur>l) return;
    if(cur==l&&cost<=t&&cost>=s) {
        v.insert(node);
        return;
    }
    for(auto nxt:adj[node]) {
        dfs(nxt.fs, cur+1, cost+nxt.sc);
    }
}

void solve() {
    int n,m;cin>>n>>m>>l>>s>>t;
    adj.resize(n+1);
    for(int i=0;i<m;i++) {
        int u,v,c;cin>>u>>v>>c;
        adj[u].pb({v, c});
    }
    dfs(1, 0, 0);

    for(auto x:v) {
        cout << x << ' ';
    }
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
