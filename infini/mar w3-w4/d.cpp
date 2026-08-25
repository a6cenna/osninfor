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

void solve() {
    int n,m;cin>>n>>m;
    vector<vector<int>> adj(n+1);
    int target=-1;
    for(int i=0;i<m;i++) {
        int u,v;cin>>u>>v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    int cnt=0;
    for(int i=1;i<=n;i++) {
        if(adj[i].size()==1) {
            target=adj[i][0];
            cnt++;
        }
    }
    int y=adj[target].size()-1;
    int x=cnt/y;
    cout << x << ' ' << y << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
