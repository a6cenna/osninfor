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
    int n,k;cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int l=1,r=2e14;
    int ans=-1;
    while(l<=r) {
        int mid=(l+r)/2;
        int cur=0;
        int cnt=1;
        int ok=1;
        for(int i=0;i<n;i++) {
            if(a[i]>mid) {
                ok=0;
                break;
            }
            if(cur+a[i]>mid) {
                cnt++;
                cur=0;
            }
            cur+=a[i];
            if(cnt>k) {
                ok=0;
                break;
            }
        }
        if(ok) {
            r=mid-1;
            ans=mid;
        }
        else l=mid+1;
    }

    cout << ans << '\n';
}

signed main() {
    war_without_reason

    solve();
}
