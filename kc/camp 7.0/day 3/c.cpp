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
    int n,m,x,y;cin>>n>>m>>x>>y;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int b[m];
    for(int i=0;i<m;i++)cin>>b[i];
    vector<pii> ans;
    
    // int r=0;
    // for(int l=0;l<n&&r<m;l++) {
    //     while(b[r]>a[l]+y||b[r]<a[l]-x&&r<m) {
    //         r++;
    //         cout << b[r] << ' ' << a[l] << " dbg\n";
    //         // cout << r << ' ' << l << " idx dbg\n";
    //     }
    //     ans.pb({l+1, b[r]});
    //     r++;
    // }
    int r=0;
    for(int l=0;l<m&&r<n;l++) {
        while(r<n&&(b[l]>a[r]+y)) {
            r++;
            // cout  << a[r] << ' ' << b[l] << " dbg\n";
            // cout << r << ' ' << l << " idx dbg\n";
        }
        if(b[l]<=a[r]+y&&b[l]>=a[r]-x) {
            // cout  << a[r] << ' ' << b[l] << " 1dbg\n";
            ans.pb({r+1, l+1});
            r++;
        }
    }
    cout << ans.size() << '\n';
    for(auto ans:ans) {
        cout << ans.fs << ' ' << ans.sc << '\n';
    } 
}

signed main() {
    suffering_leaves_suffering_leaves

    solve();
}
