#include <bits/stdc++.h>

using namespace std;

const int MOD = 1e9+7;

void solve() {
    int n;cin>>n;
    
    vector<vector<int>> dp(n, vector<int>(n, 0));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            char x;
            cin >> x;
            if(x=='*') dp[i][j]=-1;
        }
        
    }
    if(dp[0][0]==-1||dp[n-1][n-1]==-1) {
        cout << 0;
        return;
    }
    dp[0][0]=1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(dp[i][j]!=-1) {
                if(j+1 < n&&dp[i][j+1]!=-1) dp[i][j+1]+=dp[i][j] % MOD;
                if(i+1 < n&&dp[i+1][j]!=-1) dp[i+1][j]+=dp[i][j] % MOD;
            } 
        }
        
    }
    cout << dp[n-1][n-1] % MOD;
}

int main() {
    solve();
}
