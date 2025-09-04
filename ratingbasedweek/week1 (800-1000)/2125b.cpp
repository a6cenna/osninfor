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
    int a,b,k;cin>>a>>b>>k;
    if(a<=k&&b<=k) cout << 1 << '\n';
    else if(a/gcd(a,b)<=k&&b/gcd(a,b)<=k) cout << 1 << '\n';
    else cout << 2 << '\n';

}

signed main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
