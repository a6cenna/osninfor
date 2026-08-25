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
    int l=1,r=1e9;
    int ans=INT_MAX;
    while(l<=r) {
        int mid=(l+r)/2;
        int cur=0;
        for(int i=0;i<n;i++) {
            cur+=(a[i]==mid?0:a[i]/mid);
            if(cur>k) break;
        }
        if(cur<=k) {
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
