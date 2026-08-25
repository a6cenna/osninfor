#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define pii pair<int,int>
#define fs first
#define sc second

const int N=2e5,M=2e5;

vector<vector<int>> adj(N+5);

void solve() {
    int n,m;cin>>n>>m;
    for(int i=1;i<n;i++) {
        int u,v;cin>>u>>v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    set<int> st;
    while(m--) {
        int a,b;cin>>a>>b;
        st.insert(a);
    }

    cout << st.size() << '\n';
    for(auto x:st) {
        cout << x << ' ';
    }
    cout << '\n';
}

signed main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    solve();
}
