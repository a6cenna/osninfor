// war without reason

#include <bits/stdc++.h>
using namespace std;

#define war_without_reason ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fs first
#define sc second
#define pb push_back
#define int ll

void solve() {
    int n,x;cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int l=1,r=2e9,ans=-1;
    while(l<=r) {
        int mid=(l+r)/2;
        int cur=0;
        for(auto w:a) {
            cur+=max(0LL, mid-w);
        }
        if(cur<=x) {
            ans=mid;
            l=mid+1;
        }
        else r=mid-1;
    }

    cout << ans << '\n';
}

signed main() {
    war_without_reason

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
