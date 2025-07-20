// combine n-1 2k, m-1 2k

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

const ll mod=1e9+7;

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

    if(2*k>n||2*k>m) {
        cout << 0;
        return;
    }
    
    int nn=fact[n-1];
    int n1=fastexpo(fact[2*k], mod-2);
    int n2=fastexpo(fact[n-2*k-1], mod-2);
    int mn=fact[m-1];
    int m1=fastexpo(fact[2*k], mod-2);
    int m2=fastexpo(fact[m-2*k-1], mod-2);
    cout << ((((nn*n1%mod)*n2%mod)*mn%mod)*m1%mod)*m2%mod;
}

signed main() {
    suffering_leaves_suffering_leaves

    pre();
    solve();
}
