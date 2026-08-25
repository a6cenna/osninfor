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
    int n,c;cin>>n>>c;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    int l=0,r=1e9;
    int ans=0;
    while(l<=r) {
        int mid=(l+r)/2;
        int cnt=1;
        int cur=a[0];
        for(int i=1;i<n;i++) {
            if(a[i]-cur>=mid) {
                cnt++;
                cur=a[i];
            }
            if(cnt==c) break;
        }
        if(cnt==c) {
            l=mid+1;
            ans=mid;
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
