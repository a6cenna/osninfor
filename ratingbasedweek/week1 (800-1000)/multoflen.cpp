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
    cout << "1 1\n" << -a[0] << '\n';
    if(n==1) {
        cout << "1 1\n0\n1 1\n0\n";
        return;
    }
    cout << "1 " << n << "\n0 ";
    for(int i=1;i<n;i++) {
        cout << -a[i]*n << ' ';
    }
    cout << "\n2 " << n << "\n";
    for(int i=1;i<n;i++) {
        cout << a[i]*(n-1) << ' ';
    }
    cout << '\n';
}

signed main() {
    suffering_leaves_suffering_leaves

    int t=1;
    // cin >> t;

    while(t--) {
        solve();
    }
}
