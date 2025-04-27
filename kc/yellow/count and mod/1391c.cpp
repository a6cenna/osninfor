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

const ll MOD=1e9+7;

ll fastexpo(ll x, ll y) {
    ll res=1;
    while(y) {
        if(y%2==1) res=res*x%MOD;
        y/=2;
        x=x*x%MOD;
    }
    return res;
}

ll fact(ll x) {
    ll res=1;
    for(ll i=2;i<=x;i++) {
        res=res*i%MOD;
    }
    return res;
}

void solve() {
    ll n;cin>>n;

    cout << (fact(n)-fastexpo(2,n-1)+MOD)%MOD;
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
