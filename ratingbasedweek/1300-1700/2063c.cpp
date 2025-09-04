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

void solve() {
    int n;cin>>n;
    vector<vector<int>> adj(n+1);
    int degree[n+1];
    for(int i=0;i<n-1;i++) {
        int x,y;cin>>x>>y;
        adj[x].pb(y);
        adj[y].pb(x);
    }
    multiset<int> ms;
    for(int i=1;i<=n;i++) {
        degree[i]=adj[i].size();
        ms.insert(degree[i]);
    }
    int mx=0;
    for(int i=1;i<=n;i++) {
        int cur=degree[i];
        ms.erase(ms.find(cur));
        for(auto x:adj[i]) {
            ms.erase(ms.find(degree[x]));
            degree[x]--;
            ms.insert(degree[x]);
        }
        cur+=(*ms.rbegin())-1;
        mx=max(mx, cur);
        ms.insert(degree[i]);
        for(auto x:adj[i]) {
            ms.erase(ms.find(degree[x]));
            degree[x]++;
            ms.insert(degree[x]);
        }
    }
    cout << mx << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
