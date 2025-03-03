#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;cin>>n;
    vector<int> h(n);
    for(int i=0;i<n;i++) cin>>h[i];
    vector<vector<int>> dp(n, vector<int>(n, 0));

    for (int i = 0; i < n; i++)
    {
        dp[i][i]=0;
    }

    for (int i = 0; i < n-1; i++)
    {
        dp[i][i+1]=abs(h[i]-h[i+1]);
    }
    
    for (int i = 3; i <=n; i++)
    {
        for (int l = 0; l <= n-i; l++)
        {
            int r=l+i-1;
            dp[l][r] = abs(h[r]-h[l])+dp[l+1][r-1];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        int best=INT_MAX;
        for(int l=0;l<=n-i;l++) {
            int r=l+i-1;
            best=min(best, dp[l][r]);
        }
        cout << best << " ";
    }
    
}
