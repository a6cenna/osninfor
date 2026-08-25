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
    int n;cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    vector<int> pre(n+1, 0);
    for(int i=1;i<=n;i++) pre[i]=pre[i-1]+b[i-1];
    sort(a,a+n);
    int ans=0;
    for(int i=0;i<n;i++) {
        ans=max(ans, a[i]*(upper_bound(pre.begin(),pre.end(),n-i)-pre.begin()-1));
        // cout << upper_bound(pre.begin(),pre.end(),n-i)-pre.begin()-1 << " dbg\n";
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
