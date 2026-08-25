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

void solve() {
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int inf=LLONG_MIN;
    vector<vector<int>> dp(n+1, vector<int>(4, LLONG_MIN));
    dp[0][1]=0;
    for(int i=1;i<=n;i++) {
        dp[i][1]=dp[i-1][1];
        if(dp[i-1][1]!=inf) {
            dp[i][2]=max(dp[i][2],dp[i-1][1]+a[i-1]);
        }
        if(dp[i-1][2]!=inf) {
            dp[i][2]=max(dp[i][2],dp[i-1][2]+a[i-1]);
            dp[i][3]=max(dp[i][3], dp[i-1][2]);
        }
        if(dp[i-1][3]!=inf) {
            dp[i][3]=max(dp[i][3],dp[i-1][3]);
        }
    }

    cout << max(dp[n][2], dp[n][3]) << '\n';
}

signed main() {
    war_without_reason

    solve();
}
