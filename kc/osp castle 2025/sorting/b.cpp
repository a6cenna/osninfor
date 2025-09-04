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
    int n;cin>>n;
    int a[3*n];
    for(int i=0;i<3*n;i++) cin>>a[i];
    sort(a,a+3*n, greater<int>());
    int sum=0LL;
    for(int i=0;i<n;i++) {
        sum+=a[i*2+1];
    }

    cout << sum << '\n';
}

signed main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
