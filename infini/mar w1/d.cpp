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
    int n,h;cin>>n>>h;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int l=1;
    int r=1e18;
    int ans=-1;
    while(l<=r) {
        int mid=(l+r)/2;
        int cnt=0;
        for(int i=0;i<n-1;i++) {
            cnt+=min(a[i+1]-a[i], mid);
        }
        cnt+=mid;
        if(cnt>=h) {
            ans=mid;
            r=mid-1;
        }
        else l=mid+1;
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
