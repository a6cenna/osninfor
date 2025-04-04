// author: sofwant || a6cenna
// created at 02/04/2025
// suffering leaves suffering leaves.

#include <bits/stdc++.h>
using namespace std;

#define suffering_leaves_suffering_leaves ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fs first
#define sc second
#define pb push_back

void solve() {
    int n,m;cin>>n>>m;
    // dua warna
    // 1-x: 1 warna, x-n: 1 warna
    int a[m];
    for(int i=0;i<m;i++)cin>>a[i];
    sort(a,a+m);
    ll ans=0;
    for(int i=1;i<n;i++) {
        int kiri=m-(lower_bound(a,a+m,i)-a);
        int kanan=m-(lower_bound(a,a+m,n-i)-a);
        ans+=1LL*kiri*kanan-min(kanan,kiri);
    }
    cout << ans << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
