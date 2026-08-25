// war without reason

#include <bits/stdc++.h>
using namespace std;

#define war_without_reason ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fs first
#define sc second
#define pb push_back
#define int ll

const int inf=LLONG_MAX/2;

vector<vector<int>> dp(100, vector<int>(100, inf));

void solve() {
    int x,y;cin>>x>>y;

    int ans=inf;
    for(int i=0;i<=59;i++) {
        for(int j=0;j<=59;j++) {
            if((x>>i)==(y>>j)) ans=min(ans,dp[i][j]);
        }
    }

    cout << ans << '\n';
}

signed main() {
    war_without_reason

    int t;
    cin >> t;

    dp[0][0]=0;

    for(int i=0;i<=59;i++) {
        for(int j=59;j>=0;j--) {
            for(int k=59;k>=0;k--) {
                if(i<=j&&dp[j-i][k]!=inf) dp[j][k]=min(dp[j][k], dp[j-i][k]+(1LL<<i));
                if(i<=k&&dp[j][k-i]!=inf) dp[j][k]=min(dp[j][k], dp[j][k-i]+(1LL<<i));
            }
        }
    }

    while(t--) {
        solve();
    }
}
