// in the pool

#include <bits/stdc++.h>
using namespace std;

#define suffering_leaves_suffering_leaves ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fs first
#define sc second
#define pb push_back

void solve() {
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    vector<vector<int>> dp(n+1,vector<int>(3,INT_MIN));
    dp[0][0]=0;
    for(int i=1;i<=n;i++) {
        dp[i][0]=dp[i-1][0]+(dp[i-1][0]<a[i-1])-(dp[i-1][0]>a[i-1]);
        dp[i][1]=max(dp[i-1][0],dp[i-1][1]);
        dp[i][2]=max(dp[i-1][1],dp[i-1][2])+(max(dp[i-1][1],dp[i-1][2])<a[i-1])-(max(dp[i-1][1],dp[i-1][2])>a[i-1]);
    }

    cout << max(dp[n][1],dp[n][2]) << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
