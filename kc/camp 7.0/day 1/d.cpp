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
    ll n,l,r;cin>>n>>l>>r;
    ll a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    vector<ll> pref(n+1, 0);
    vector<ll> suff(n+2, 0);
    for(int i=1;i<=n;i++) {
        pref[i]=min(l*i, pref[i-1]+a[i-1]);
    }
    for(int i=n;i>=1;i--) {
        suff[i]=min(r*(n-i+1), suff[i+1]+a[i-1]);
    }
    ll ans = LLONG_MAX;
    for(int i=0;i<=n;i++) {
        ans=min(ans, pref[i]+ suff[i+1]);
    }
    cout << ans;
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
