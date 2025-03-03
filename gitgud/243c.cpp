#include <bits/stdc++.h>

using namespace std;

void solve() {
    freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    vector<long long> dp(n, 0);
    dp[0]=a[0]>=0;
    for(int i=1;i<n;i++) {
        dp[0]+=(a[i]<=0);
    }
    long long ans=dp[0];
    for(int i=1;i<n-1;i++) {
        dp[i]=dp[i-1]-(a[i]<=0)+(a[i]>=0);
        ans=min(ans, dp[i]);
    }

    cout << ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}
