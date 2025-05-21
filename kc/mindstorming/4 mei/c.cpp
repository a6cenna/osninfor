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
    ll n,k;cin>>n>>k;
    vector<ll> div;
    for(ll i=1;i<=sqrt(n);i++) {
        if(n%i==0) {
            div.pb(i);
            if(n/i!=i) {
                div.pb(n/i);
            }
        }
    }
    sort(div.begin(), div.end());
    if(div.size()<k) cout << -1;
    else cout << div[k-1];
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
