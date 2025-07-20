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
#define int ll

vector<vector<int>> adj;
vector<bool> vis;
vector<int> curgroup;

const int mod=1e9+7;

void dfs(int cur) {
    vis[cur]=true;
    curgroup.pb(cur);
    for(auto node:adj[cur]) {
        if(!vis[node]) {
            dfs(node);
        }
    }
}

void solve() {
    int n;cin>>n;
    adj.clear();
    vis.clear();
    curgroup.clear();
    adj.resize(n+1);
    vis.resize(n+1);
    int a[n],b[n],d[n];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    for(int i=0;i<n;i++) cin>>d[i];
    set<int> st;
    for(auto di:d) {
        st.insert(di);
    }
    for(int i=0;i<n;i++) {
        adj[a[i]].pb(b[i]);
        adj[b[i]].pb(a[i]);
    }
    vector<vector<int>> groups;
    for(int i=1;i<=n;i++) {
        if(!vis[i]) {
            curgroup.clear();
            dfs(i);
            groups.pb(curgroup);
        }
    }
    ll ans=1;
    for(auto g:groups) {
        bool can=true;
        for(auto cur:g) {
            if(st.count(cur)) {
                can=false;
                break;
            }
        }
        if(can&&g.size()!=1)ans=ans*2%mod;
    }

    cout << ans << '\n';
}

signed main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
