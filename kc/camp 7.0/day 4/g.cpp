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


void solve() {
    int n,a,b,p,q;cin>>n>>a>>b>>p>>q;
    int dp[111][111][2];
    // for(int i=0;i<n;i++)for(int j=0;j<n;j++)for(int t=0;t<2;t++) dp[i][j][t]=0;
    dp[a][b][0]=1;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            for(int t=0;t<2;t++) {
                if(t==0) {
                    for(int m=1;m<=p;m++) {
                        dp[min(i+m, n)][j][1]=(dp[min(i+m, n)][j][1]+dp[i][j][0]*fastexpo(p, mod-2)%mod)%mod;
                    }
                }
                else if(t==1) {
                    for(int m=1;m<=q;m++) {
                        dp[i][min(j+m, n)][0]=(dp[i][min(j+m, n)][0]+dp[i][j][1]*fastexpo(q, mod-2)%mod)%mod;
                    }
                }
            }
        }
    }

    int ans=0;
    for(int i=b;i<n;i++) {
        ans=(ans+dp[n][i][1])%mod;
    }

    cout << ans%mod;
}

signed main() {
    suffering_leaves_suffering_leaves

    solve();
}
