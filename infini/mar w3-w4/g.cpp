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
#define int ll

map<int,vector<int>> mp;
set<int> vis;

void dfs(int cur) {
    if(vis.count(cur)) return;
    vis.insert(cur);
    for(auto node:mp[cur]) {
        if(vis.count(node)) continue;
        dfs(node);
    }
}

void solve() {
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    mp.clear();
    vis.clear();
    for(int i=1;i<=n-1;i++) {
        int x=a[i]+i;
        int y=x+i;
        mp[x].pb(y);
    }
    dfs(n);
    cout << *vis.rbegin() << '\n';
}

signed main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
