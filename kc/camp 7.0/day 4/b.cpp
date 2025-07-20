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

void solve() {
    int n;cin>>n;
    int a[2][n+1];
    for(int i=0;i<2;i++) {
        for(int j=1;j<=n;j++) {
            cin>>a[i][j];
        }
    }
    vector<vector<int>> dp(2, vector<int>(n+1));
    dp[0][0]=0;
    dp[1][0]=0;
    for(int i=1;i<=n;i++) {
        if(i-2<0) dp[0][i]=dp[1][i-1]+a[0][i];
        else dp[0][i]=max(dp[1][i-2]+a[0][i], dp[1][i-1]+a[0][i]);
        if(i-2<0) dp[1][i]=dp[1][i-1]+a[1][i];
        else dp[1][i]=max(dp[0][i-2]+a[1][i], dp[0][i-1]+a[1][i]);
    }

    cout << max(dp[0][n], dp[1][n]);
}

signed main() {
    suffering_leaves_suffering_leaves

    solve();
}
