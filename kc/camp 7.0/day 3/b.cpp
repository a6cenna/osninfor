// author: sofwant || a6cenna

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
    int a[n];
    a[0]=1;
    for(int i=1;i<n;i++) cin>>a[i];
    int b[n];
    for(int i=0;i<n;i++) cin>>b[i];
    int ans=0;
    sort(a,a+n);
    sort(b,b+n);
    
    // for(int i=0;i<n;i++) {
    //     int idx=lower_bound(b, b+n, a[i])-b;
    //     if(a[i]-b[idx]>=0) ans++;
    // }
    // int l=0;
    // int no=0;
    // for(int r=0;r<n;r++) {
    //     if(r>=n-no-1) break;
    //     while(a[l]>=b[r]) {
    //         cout << a[l] << ' ' << b[r] << " dbg\n";
    //         cout << l << ' ' << r << " idx dbg\n";
    //         no++;
    //         r++;
    //     }
    //     l++;
    // }
    int r=0;
    for(int l=0;l<n&&r<n;l++) {
        while(a[l]>=b[r] && r<n) {
            // cout << a[l] << ' ' << b[r] << " dbg\n";
            // cout << l << ' ' << r << " idx dbg\n";
            ans++;
            r++;
        }
        r++;
    }

    cout << ans << '\n';
}

signed main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
