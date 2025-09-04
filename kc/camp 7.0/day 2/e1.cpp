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
#define i

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
    return res;
}

vector<ll> fact[N+1];

void prefac() {
    fact[0]=1;
    for(ll i=1;i<=N;i++) fact[i]=(fact[i-1]*i)%mod;
}

void solve() {
    cout << fastexpo(2, 2);
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
