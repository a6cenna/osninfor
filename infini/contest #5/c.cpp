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

void solve() {
    int n,m;cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    vector<int> pref(n+1,0);
    for(int i=1;i<=n;i++) pref[i]=pref[i-1]+a[i-1];
    int cur=0;
    while(m--) {
        int b;cin>>b;
        while(b>pref[cur]) cur++;
        cout << cur << ' ' << b-pref[cur-1] << '\n';
    }
}

signed main() {
    suffering_leaves_suffering_leaves

    solve();
}
