#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n,k;cin>>n>>k;
    int a[n],b[n];
    int sum=0;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    int ans=10000;
    int l=1;
    int r=10000;
    while(l<=r) {
        int mid=(l+r)/2;
        int butuh=0;
        for(int i=0;i<n;i++) {
            butuh+=min(a[i]*mid, b[i]);
        }
        if(ceil((double)butuh/mid)<=k) {
            ans=mid;
            r=mid-1;
        }
        else l=mid+1;
    }

    cout << ans << '\n';
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t=1;
    // cin>>t;
    while(t--) solve();
}
