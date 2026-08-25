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
    int n,m;cin>>n>>m;
    int a[n],b[m];
    vector<int> pref(n+1,0);
    for(int i=0;i<n;i++) {
        cin>>a[i];
        pref[i+1]=pref[i]+a[i];
    }
    while(m--) {
        int b;cin>>b;
        int l=0,r=n;
        int ans=0;
        while(l<=r) {
            int mid=(l+r)/2;
            if(pref[mid]<b) {
                l=mid+1;
            }
            else {
                r=mid-1;
                ans=mid;
            }
        }

        cout << ans << ' ' << b-pref[ans-1] << '\n';
    }
}

signed main() {
    suffering_leaves_suffering_leaves

    solve();
}
