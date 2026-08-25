// war without reason

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
vector<int> type;
int ans=0;
bool ok=1;
int cnt[3];

void dfs(int node, int par) {
    type[node]=(par==1?2:1);
    cnt[type[node]]++;
    
    for(int nxt:adj[node]) {
        if(type[nxt]!=0&&type[nxt]==type[node]) ok=0;
        if(type[nxt]!=0) continue;
        dfs(nxt,type[node]);
    }
}

void solve() {
    int n,m;cin>>n>>m;
    adj.clear();
    type.clear();
    adj.resize(n+1);
    type.resize(n+1,0);
    for(int i=0;i<m;i++) {
        int u,v;cin>>u>>v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    
    int ans=0;
    for(int i=1;i<=n;i++) {
        if(type[i]!=0) continue;
        ok=1;
        memset(cnt,0,sizeof(cnt));
        dfs(i, 2);
        if(ok) {
            ans+=max(cnt[1],cnt[2]);
        }
    }

    cout << ans << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
