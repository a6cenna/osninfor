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
    ll x;cin>>x;
    ll ans=INT_MAX;
    for(ll i=1;i<=sqrt(x);i++) {
        if(lcm(i, x/i)==x && x/i==0) {
            ans=i;
        }
    }
    cout << ans << ' ' << x/ans;
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
