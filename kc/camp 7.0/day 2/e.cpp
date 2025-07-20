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

const ll mod = 1e9+7;
const ll N = 1e6+9;

ll fastexpo(ll b, ll p) {
    ll res=1;
    while(p) {
        if(p%2==1) {
            res=res*b%mod;
        }
        b=b*b%mod;
        p/=2;
    }
    return res%mod;
}

vector<ll> fact(N+1);

void prefact() {
    fact[0]=1;
    for(int i=1;i<=N;i++) fact[i]=(fact[i-1]*i)%mod;
}

void solve() {
    string s;cin>>s;
    int n,m,k;cin>>n>>m>>k;
    string s1;cin>>s1;

    ll cn=fact[m];
    ll ck=fastexpo(fact[k], mod-2);
    ll cnk=fastexpo(fact[m-k], mod-2);

    cout << ((fastexpo(fastexpo(2, n-1), m)*cn%mod)*ck%mod)*cnk%mod; // cnk
}

signed main() {
    suffering_leaves_suffering_leaves

    prefact();
    solve();
}
