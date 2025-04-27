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

const ll MAX=1e10;
const ll MAXNM=2e18;

void solve() {
    ll n,m,k;cin>>n>>m>>k;
    // vector<ll> v;
    // for(ll i=1;i<=MAX/2;i++) {
    //     v.pb(i*n);
    // } 
    // for(ll i=1;i<=MAX/2;i++) {
    //     v.pb(i*k);
    // }   
    ll kpk=lcm(n,m);
    ll l=0, r=MAXNM;
    while(l<r) {
        ll mid=(l+r)/2;
        ll val=mid/n+mid/m-2*(mid/kpk);
        if(val<k) l=mid+1;
        else r=mid;
    }
    cout << r;
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
