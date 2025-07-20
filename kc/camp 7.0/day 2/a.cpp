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

void solve() {
    ll n,m;cin>>n>>m;

    // ll ans=fastexpo(2, n*m)%mod; 
    // for(int i=1;i<=n;i++) {
    //     ans=ans-fastexpo(2, i)%mod; 
    // }
    // if(n==1) cout << fastexpo(2, m)%mod-1;
    // else cout << fastexpo(2, n*m-1)%mod-(fastexpo(2,n+1)-1);
    cout << fastexpo((fastexpo(2, m)-1), n)%mod;
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
