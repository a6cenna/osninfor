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
    int n,m,k;cin>>n>>m>>k;
    int l=1;
    int r=n*m;
    int ans=-1;
    while(l<=r) {
        int mid=(l+r)/2;
        int cur=0;
        for(int i=1;i<=m;i++) {
            cur+=min(n,mid/i);
        }
        if(cur<k) {
            l=mid+1;
        }
        else {
            r=mid-1;
            ans=mid;
        }
    }
    cout << ans << '\n';
}

signed main() {
    suffering_leaves_suffering_leaves

    solve();
}
