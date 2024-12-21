#include <bits/stdc++.h>

using namespace std;

const int MOD=1e9+7;

void solve() {
    int n, x;cin>>n>>x;
    int c[n];
    for (int i = 0; i < n; i++)
    {
        cin>>c[i];
    }
    vector<int> dp(x+1, 0);
    dp[0]=1;
    for (int i = 1; i <= x; i++)
    {
        for (auto c:c)
        {
            if(i-c>=0) {
                dp[i]=(dp[i]+dp[i-c])%MOD;
            }
        }
        
    }
    cout << dp[x];
}

int main() {
    solve();
}
