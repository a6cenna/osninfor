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

const int mod=998244353;

ll fastexpo(ll b, ll p) {
    ll res=1;
    while(p) {
        if(p%2==1) {
            res=res*b%mod;
        }
        b=b*b%mod;
        p/=2;
    }
    return res;
}

ll fact[2001];

void pre() {
    fact[0]=1;
    for(int i=1;i<=2000;i++) fact[i]=(fact[i-1]*i)%mod;
}

void solve() {
    int n,m,k;cin>>n>>m>>k;

    int c1=(fact[n-1]*fastexpo(fact[n-1-k], mod-2)%mod)*fastexpo(fact[k], mod-2)%mod;
    int c2=fact[m]*fastexpo(fact[m-(k+1)], mod-2)%mod;
    cout << (m*c1%mod)*fastexpo(m-1, k)%mod;
}

signed main() {
    suffering_leaves_suffering_leaves

    pre();

    solve();
}
