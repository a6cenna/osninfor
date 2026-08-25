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
    int n,x,y;cin>>n>>x>>y;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int sum=0;
    for(int i=0;i<n;i++) sum+=(a[i]/x)*y;
    int ans=-1;
    for(int i=0;i<n;i++) {
        ans=max(ans, sum-((a[i]/x)*y)+a[i]);
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
