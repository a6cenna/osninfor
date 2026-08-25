// war without reason

#include <bits/stdc++.h>
using namespace std;

#define suffering_leaves_suffering_leaves ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fs first
#define sc second
#define pb push_back
#define int ll

void solve() {
    int n,k;cin>>n>>k;
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++) cin>>a[i]>>b[i];
    vector<vector<int>> dp(n+1, vector<int>(2*k+2, -1));
    dp[0][1]=0;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=2*k+1;j++) {
            if(dp[i-1][j]!=-1) {
                dp[i][j]=max(dp[i][j], dp[i-1][j]+(j%2==1?a[i-1]:b[i-1]));
            }
            if(dp[i-1][j-1]!=-1) {
                dp[i][j]=max(dp[i][j], dp[i-1][j-1]+(j%2==1?a[i-1]:b[i-1]));
            }
        }
    }
    int ans=-1;
    for(int i=0;i<=2*k+1;i++) {
        ans=max(ans, dp[n][i]);
    }

    cout << ans << '\n';
}

signed main() {
    suffering_leaves_suffering_leaves

    solve();
}
