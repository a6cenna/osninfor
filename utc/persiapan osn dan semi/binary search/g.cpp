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
    int n,t;cin>>n>>t;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int l=1,r=1e18;
    int ans=1e18;
    while(l<=r) {
        int mid=l+(r-l)/2;
        int cur=0;
        for(int i=0;i<n;i++) {
            cur+=mid/a[i];
            if(cur>=t) break;
        }
        if(cur>=t) {
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
