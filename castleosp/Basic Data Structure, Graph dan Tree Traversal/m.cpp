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

const int mod=1e9+7;

vector<vector<int>> adj;
vector<vector<int>> dp;

void dfs(int node, int par) {
    for(int nxt:adj[node]) {
        if(nxt==par) continue;
        dfs(nxt, node);
        dp[node][0]=dp[node][0]*((dp[nxt][1]+dp[nxt][0])%mod)%mod;
        dp[node][1]=dp[node][1]*dp[nxt][0]%mod;
    }
}

void solve() {
    int n;cin>>n;
    adj.resize(n+1);
    dp.resize(n+1,vector<int>(2, 1)); // vertice, 0->putih, 1->item
    for(int i=1;i<n;i++) {
        int x,y;cin>>x>>y;
        adj[x].pb(y);
        adj[y].pb(x);
    }
    dfs(1, 0);

    cout << (dp[1][0]+dp[1][1])%mod << '\n';
}

signed main() {
    war_without_reason

    solve();
}
