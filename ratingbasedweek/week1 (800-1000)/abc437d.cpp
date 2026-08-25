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

const int MOD=998244353;

void solve() {
    int n,m;cin>>n>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];
    sort(a,a+n);
    int pre[n+1];
    pre[0]=0;
    for(int i=1;i<=n;i++) {
        pre[i]=(pre[i-1]+a[i-1])%MOD;
    }
    int ans=0;
    for(int i=0;i<m;i++) {
        int l=0,r=n-1;
        int idx=-1;
        while(l<=r) {
            int mid=(l+r)/2;
            if(a[mid]>b[i]) {
                r=mid-1;
            }
            else {
                idx=mid;
                l=mid+1;
            }
        }
        // cout <<  << " dbg\n";
        ans+=(((b[i]*(idx+1))%MOD-pre[idx+1]+MOD)%MOD+((pre[n]-pre[idx+1]+MOD)%MOD-(b[i]*(n-idx-1)%MOD)+MOD)%MOD)%MOD;
    }
    cout << ans%MOD << '\n';
}

signed main() {
    suffering_leaves_suffering_leaves

    solve();
}
