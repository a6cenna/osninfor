// in the pool

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

const int N=1e6+5;
const int MOD=998244353;

int fact[N];

void prefact() {
    fact[0]=1;
    for(int i=1;i<N;i++) {
        fact[i]=(fact[i-1]*i)%MOD;
    }
}

int fastexpo(int a,int b) {
    int res=1;
    while(b>0) {
        if(b%2==1) res=(res*a)%MOD;
        a=(a*a)%MOD;
        b/=2;
    }
    return res;
}

void solve() {
    int n,m;cin>>n>>m;
    int a[m];
    map<int,int> mp;
    for(int i=0;i<m;i++) {
        cin>>a[i];
        mp[a[i]]++;
    }
    int tmp=fact[n];
    int div=1;
    for(int i=0;i<m;i++) {
        div=(div*fact[a[i]])%MOD;
    }
    for(auto x:mp) {
        div=(div*fact[x.sc])%MOD;
    }
    cout << (tmp*fastexpo(div,MOD-2))%MOD << '\n';
}

signed main() {
    suffering_leaves_suffering_leaves

    prefact();
    solve();
}
