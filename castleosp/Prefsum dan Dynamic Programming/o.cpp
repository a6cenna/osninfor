// war without reason

#include <bits/stdc++.h>
using namespace std;

#define war_without_reason ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fs first
#define sc second
#define pb push_back
#define int ll

void solve() {
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    vector<vector<int>> dp(n+1, vector<int>(n+1, 0));
    for(int r=1;r<=n;r++) {
        for(int l=r;l>=1;l--) {
            if(r==l) dp[l][r]=a[l-1];
            else dp[l][r]=max(a[l-1]-dp[l+1][r], a[r-1]-dp[l][r-1]);
        }
    }

    cout << dp[1][n] << '\n';
}

signed main() {
    war_without_reason

    solve();
}
