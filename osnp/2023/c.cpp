// author: sofwant || a6cenna

#include <bits/stdc++.h>
using namespace std;

#define suffering_leaves_suffering_leaves ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define int ll
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fs first
#define sc second
#define pb push_back

const int N=1e5+5;

vector<vector<int>> adj;
vector<bool> vis;

int a[N];

vector<int> group;
void dfs(int x) {
    vis[x]=true;
    group.pb(a[x]);
    for(auto node:adj[x]) {
        if(!vis[node]) dfs(node);
    }
}

void solve() {
    int n,m,k;cin>>n>>m>>k;
    vector<int> b;
    adj.resize(n+1);
    vis.resize(n+1,false);
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=0;i<m;i++) {
        int x;cin>>x;
        b.pb(x);
    }
    sort(b.begin(), b.end(), greater<int>());
    for(int i=0;i<k;i++) {
        int x,y;cin>>x>>y;
        adj[x].pb(y);
        adj[y].pb(x);
    }
    bool can=true;
    int ans=0;
    vector<int> kecik;
    for(int i=1;i<=n;i++) {
        if(vis[i]) continue;
        group.clear();
        dfs(i);
        sort(group.begin(), group.end());
        kecik.pb(group[0]);
    }
    sort(kecik.begin(), kecik.end(), greater<int>());
    for(auto x:kecik) {
        if(b.empty()) {
            can=false;
            break;
        }
        ans+=x*b[b.size()-1];
        b.pop_back();
    }
    if(!can) cout << -1 << '\n';
    else cout << ans << '\n';
}

signed main() {
    suffering_leaves_suffering_leaves

    solve();
}
