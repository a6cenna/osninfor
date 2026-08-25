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

void solve() {
    int n,m;cin>>n>>m;
    vector<int> a(n+1);
    for(int i=1;i<=n;i++) cin>>a[i];

    // vector<vector<vector<int>>> dp(n+1, vector<vector<int>>(m+1, vector<int>(2, inf))); // [konsiderasi dari 1..i][dengan jumlah j][sekarang berada di interval yg hapus ga]
    // // 0 ga hapus, 1 hapus
    // dp[0][0][0]=0;

    // for(int i=1;i<=n;i++) {
    //     for(int j=0;j<=m;j++) {
    //         dp[i][j][1]=min(dp[i-1][j][1], dp[i-1][j][0]+1);
    //         if(a[i]<=j) dp[i][j][0]=min(dp[i-1][j-a[i]][0], dp[i-1][j-a[i]][1]);
    //     }
    // }

    // for(int i=1;i<=m;i++) {
    //     cout << (min(dp[n][i][0],dp[n][i][1])==inf?-1:min(dp[n][i][0],dp[n][i][1])) << '\n';
    // }

    vector<vector<int>> dp(m+1, vector<int>(2, inf));

    dp[0][0]=0;
    for(int i=1;i<=n;i++) {
        for(int j=m;j>=0;j--) {
            dp[j][1]=min(dp[j][1], dp[j][0]+1);
            if(a[i]<=j) dp[j][0]=min(dp[j-a[i]][0], dp[j-a[i]][1]);
            else dp[j][0]=inf;
        }
    }

    for(int i=1;i<=m;i++) {
        cout << (min(dp[i][0],dp[i][1])==inf?-1:min(dp[i][0],dp[i][1])) << '\n';
    }
}

signed main() {
    war_without_reason

    solve();
}
