#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, x;cin>>n>>x;
    int c[n];
    for (int i = 0; i < n; i++)
    {
        cin>>c[i];
    }
    vector<int> dp(x+1, INT_MAX);
    dp[0]=0;
    for (int i = 1; i <= x; i++)
    {
        for (auto c:c)
        {
            if(i-c>=0 && dp[i - c] != INT_MAX) {
                dp[i]=min(dp[i], dp[i-c]+1);
            }
        }
        
    }
    if(dp[x]==INT_MAX) {
        cout << -1;
        return;
    }
    cout << dp[x];
}

int main() {
    solve();
}
