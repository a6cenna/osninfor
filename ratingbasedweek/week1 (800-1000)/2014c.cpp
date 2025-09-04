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
    int n;cin>>n;
    int a[n];
    ll sum=0;
    for(int i=0;i<n;i++) cin>>a[i], sum+=a[i];
    if(n<=2) {
        cout << -1 << '\n';
        return;
    }
    sort(a,a+n);
    int mid=a[(n)/2];
    if(mid*n*2<sum) {
        cout << 0 << '\n';
        return;
    }
    cout << mid*n*2-sum+1 << '\n';
}

signed main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
