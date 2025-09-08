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

void solve() {
    int n,m;cin>>n>>m;
    int l=max(0LL, n-m);
    int r=n+m;
    int ans=0;
    for(int i=0;i<=30;i++) {
        if(l&(1LL<<i)||r&(1LL<<i)||r/(1LL<<(i+1))!=l/(1LL<<(i+1))) ans|=(1LL<<i);
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
