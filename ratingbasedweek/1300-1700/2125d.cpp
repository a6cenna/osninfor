// author: sofwant || a6cenna

#include <bits/stdc++.h>
using namespace std;

#define suffering_leaves_suffering_leaves ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define int ll
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fs first
#define sc second
#define pb push_back

const int mod=998244353;

int fastexpo(int x, int y) {
    int res=1;
    while(y) {
        if(y%2==1) res=res*x%mod;
        x=x*x%mod;
        y/=2;
    }
    return res;
}

int divide(int x,int y) {
    return x*fastexpo(y, mod-2)%mod;
}

void solve() {
    int n,m;cin>>n>>m;
    vector<int> dp(m+1);
    vector<vector<pii>> line(m+1);
    dp[0]=1;
    for(int i=0;i<n;i++) {
        int l,r,p,q;cin>>l>>r>>p>>q;
        line[r].pb({l, divide(p,q)});
        dp[0]=dp[0]*(((1-divide(p,q)%mod)+mod)%mod)%mod;
    }
    for(int i=1;i<=m;i++) {
        for(auto [l, prob]:line[i]) {
            int p=divide((dp[l-1]*prob%mod), ((1-prob%mod)+mod)%mod)%mod;
            dp[i]=(dp[i]+p)%mod;
        }
    }
    cout << dp[m] << '\n';
}

signed main() {
    suffering_leaves_suffering_leaves

    solve();
}
