#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++) {
        cin>>a[i];
    }

    vector<vector<long long>> dp(2, vector<long long>(n+1, 0));
    if(a[1]==1) dp[0][1]=1;
    if(a[2]==1) dp[0][2]=dp[0][1]+1;
    else dp[0][2]=dp[0][1];

    dp[1][1]=1e9;
    dp[1][2]=dp[0][1];

    for(int i=3;i<=n;i++) {
        dp[0][i]=a[i]+min(dp[1][i-1], a[i-1]+dp[1][i-2]);
        dp[1][i]=min(dp[0][i-1], dp[0][i-2]);
    }

    cout << min(dp[0][n], dp[1][n]) << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
