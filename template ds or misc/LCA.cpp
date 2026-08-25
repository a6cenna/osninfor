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

const int N=2e5;
const int MAXLOGN=20;

vector<int> tin(N+5,0), tout(N+5,0);
vector<vector<int>> adj(N+5), up(N+5, vector<int>(MAXLOGN+5));
int timer=0;

void dfs(int cur, int par) {
    tin[cur]=++timer;
    up[cur][0]=par;

    for(int i=1;i<=MAXLOGN;i++) {
        up[cur][i]=up[up[cur][i-1]][i-1];
    }

    for(auto nxt:adj[cur]) {
        if(nxt==par) continue; 

        dfs(nxt, cur);
    }

    tout[cur]=++timer;
}

bool is_ancestor(int u, int v) {
    return tin[u]<=tin[v]&&tout[u]>=tout[v];
}

int lca(int u, int v) {
    if(is_ancestor(u,v)) return u;
    if(is_ancestor(v,u)) return v;
    for(int i=MAXLOGN;i>=0;i--) {
        if(!is_ancestor(up[u][i],v)) {
            u=up[u][i];
        }
    }

    return up[u][0];
}

void solve() {
    int n,q;cin>>n>>q;

    for(int i=1;i<n;i++) {
        int u,v;cin>>u>>v;
        adj[u].pb(v);
        adj[v].pb(u);
    }

    dfs(1,1);
    while(q--) {
        int u,v;cin>>u>>v;

        cout << lca(u,v) << '\n';
    }
}

int main() {
    war_without_reason

    solve();
}
