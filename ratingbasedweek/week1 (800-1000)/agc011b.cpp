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
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    vector<int> pref(n+2, 0);
    vector<int> suff(n+2, 0);
    for(int i=1;i<=n;i++) {
        pref[i]=pref[i-1]+a[i-1];
    }
    for(int i=n;i>=1;i--) {
        suff[i]=suff[i+1]+a[i-1];
    }
    int l=0,r=n-1;
    int ans=0;
    while(l<=r) {
        int mid=(l+r)/2;
        int cur=pref[mid+1];
        bool ok=true;
        for(int i=mid+1;i<n;i++) {
            if(cur*2>=suff[i+1]) break;
            if(cur*2<a[i]) {
                ok=false;break;
            }
            cur+=a[i];
        }
        if(ok) {
            r=mid-1;
            ans=mid;
        }
        else l=mid+1;
    }
    cout << n-ans << '\n';
}

signed main() {
    suffering_leaves_suffering_leaves

    solve();
}
