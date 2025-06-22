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
ll col[2];

void dfs(int curr, int par, int color) {
    col[color]++;
    for(auto node:adj[curr]) {
        if(node!=par) {
            dfs(node, curr, !color);
        }
    }
}

void solve() {
    int n;cin>>n;
    adj.resize(n+1);
    vis.resize(n+1,0);
    for(int i=0;i<n-1;i++) {
        int a,b;cin>>a>>b;
        adj[a].pb(b);
        adj[b].pb(a);
    }

    dfs(1, 0, 0);

    cout << col[0]*col[1]-n+1 << '\n'; 
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
