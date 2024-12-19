#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n,m;cin>>n>>m;
    vector<int> dp(m+1, 0);

    for (int i = 1; i <=n; i++)
    {
        int h,k,d;cin>>h>>k>>d;
        if(d==1) {
            for (int j = m; j>=h; j--)
            {
                dp[j]=max(dp[j], dp[j-h]+k);
            }
        }
        else {
            for (int j = h; j <= m; j++)
            {
                dp[j]=max(dp[j], dp[j-h]+k);
            }
            
        }
    }
    int ans=INT_MIN;
    for (int i = 0; i <= m; i++)
    {
        ans=max(ans, dp[i]);
    }
    cout << ans;
}

int main() {
    solve();
}
