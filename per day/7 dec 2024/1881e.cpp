#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    vector<int> dp(n+1, INT_MAX);
    dp[0]=0;
    for (int i = 0; i < n; i++)
    {
        dp[i+1]=min(dp[i+1], dp[i]+1);
        if(i+a[i]+1<=n) {
            dp[i+a[i]+1]=min(dp[i+a[i]+1], dp[i]);
        } 
    }
    cout << dp[n] << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--) {
        solve();
    }
}
