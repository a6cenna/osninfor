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

const int N=1e2+5;
const int mod=1e9;

vector<vector<int>> adj(N);
vector<bool> vis(N, false);
int dp[N][100005],cost[N];
int m;

int add(int x, int y) {return (x+y)%mod;}

void dfs(int x) {
    vis[x]=true;
    dp[x][cost[x]]=1;
    for(int node:adj[x]) {
        if(vis[node])continue;
        dfs(node);
        for(int i=1;i<=m;i++) {
            dp[x][i]=add(dp[x][i], dp[node][i]);
        }
        for(int i=1;i<=m;i++) {
            if(i+cost[x]<=m) dp[x][i+cost[x]]=add(dp[x][i+cost[x]], dp[node][i]);
        }
    }
}

void solve() {
    int n;cin>>n>>m;
    for(int i=1;i<=n;i++)cin>>cost[i];
    for(int i=1;i<n;i++) {
        int x,y;cin>>x>>y;
        adj[x].pb(y);
        adj[y].pb(x);
    }
    dp[1][0]=0;
    dfs(1);
    for(int i=1;i<=m;i++) {
        dp[1][i]=add(dp[1][i], dp[1][i-1]);
        cout << dp[1][i] << '\n';
    }
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
