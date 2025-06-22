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

void solve() {
    int n,k;cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a, a+n);

    vector<ll> pref(n+1, 0);

    for(int i=1;i<=n;i++) pref[i]=a[i-1]+pref[i-1];

    ll ans=INT_MIN;

    for(int i=0;i<=k;i++) {
        ans=max(ans, pref[n-i]-pref[2*(k-i)]);
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
