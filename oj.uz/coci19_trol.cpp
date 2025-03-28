// author: sofwant || a6cenna
// created at 27/03/2025
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
    ll l,r;cin>>l>>r;
    // pake deret aritmatika
    ll n=r-l+1;
    ll ans=n/9*45;
    for(int i=0;i<n%9;i++) {
        ans+=((l+i)%9==0?9:(l+i)%9);
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
