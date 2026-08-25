#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back

void solve() {
    int n,m;cin>>n>>m;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int l=0,r=1e6;
    int ans=-1;
    while(l<=r) {
        int mid=(l+r)/2;
        int tmp=0;
        for(int i=0;i<n;i++) {
            tmp+=max(a[i]-mid, 0LL);
            if(tmp>=m) break;
        }
        if(tmp>=m) {
            l=mid+1;
            ans=mid;
        }
        else r=mid-1;
    }

    cout << ans << '\n';
}

signed main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);

    solve();
}
