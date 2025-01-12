#include <bits/stdc++.h>

using namespace std;
int MOD= 1e9+7;

void solve() {
    int n;cin>>n;

    vector<int> dp(n+1, 0);

    dp[0]=1;

    for(int i=1;i<=n;i++) { 
        for(int j=1;j<=6;j++) {
            if(i-j>=0) {
                dp[i]+=dp[i-j];
            }
        } 
        dp[i]=dp[i]%MOD;
    }

    cout << dp[n];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}
