// war without reason

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

const int MOD=1e9+7;

void solve() {
    int n,m;cin>>n>>m;
    int dp[m+1][9];
    memset(dp,0,sizeof(dp));
    dp[0][0]=1;
    for(int i=1;i<=m;i++) {
        if(n==1) {
            dp[i][0]=(2*dp[i-1][0]+dp[i-1][1]+dp[i-1][2])%MOD;
            dp[i][1]=(dp[i-1][0]+dp[i-1][2])%MOD;
            dp[i][2]=(dp[i-1][0]+dp[i-1][1])%MOD;
        }
        else {
            dp[i][0]=(dp[i-1][0]*6+dp[i-1][1]*9+dp[i-1][2]*8+dp[i-1][3]*9+dp[i-1][4]*8+dp[i-1][5]*14+dp[i-1][6]*13+dp[i-1][7]*13+dp[i-1][8]*17)
            dp[i][1]
            dp[i][2]
            dp[i][3]
            dp[i][4]
            dp[i][5]
            dp[i][6]
            dp[i][7]
            dp[i][8]
        }
    }

    cout << dp[m][0]%MOD << '\n';
}

signed main() {
    suffering_leaves_suffering_leaves

    solve();
}
