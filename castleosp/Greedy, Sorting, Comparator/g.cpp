// war without reason

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
    int n,t;cin>>n>>t;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    vector<int> suff(n+2,0);
    for(int i=n;i>=1;i--) {
        suff[i]=suff[i+1]+a[i-1];
    }
    int ans=0;
    for(int i=0;i<n;i++) {
        int tmp=0;
        int l=i,r=n-1;
        while(l<=r) {
            int mid=(l+r)/2;
            if(suff[i+1]-suff[mid+2]>t) {
                r=mid-1;
            }
            else {
                tmp=mid-i+1;
                l=mid+1;
            }
        }
        ans=max(ans, tmp);
    }

    cout << ans << '\n';
}

signed main() {
    suffering_leaves_suffering_leaves

    solve();
}
