// author: sofwant || a6cenna

#include <bits/stdc++.h>
using namespace std;

#define suffering_leaves_suffering_leaves ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define int ll
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fs first
#define sc second
#define pb push_back

void solve() { 
    int n,m;cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n,greater<int>());
    int ans=0;
    for(int i=0;i<n&&m>0;i++) {
        ans+=a[i]*m;
        m--;
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
