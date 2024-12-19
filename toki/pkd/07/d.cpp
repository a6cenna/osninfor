#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;cin>>n;
    int a[2][n];
    for(int i=0;i<=1;i++) {
        for(int j=0;j<n;j++) {
            cin>>a[i][j];
        }
    }
    vector<vector<int>> dp(n+1, vector<int>(n+1, 0));
    
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            if(a[0][i-1]==a[1][j-1]) {
                dp[i][j]=dp[i-1][j-1]+1;
            }
            else {
                dp[i][j]=max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }
    
    cout << dp[n][n];
}

int main() {
    solve();
}
