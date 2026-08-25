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

const int INF=LLONG_MAX/2;

void solve() {
    int n;cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int m;cin>>m;
    vector<int> b(m);
    for(int i=0;i<m;i++) cin>>b[i];
    vector<vector<int>> dp(n+1, vector<int>(m+1, INF));
    dp[0][0]=0;
    for(int i=0;i<=n;i++) {
        for(int j=0;j<=m;j++) {
            if(i==0&&j==0) continue;
            int tmp=INF;
            if(i>0) tmp=min(tmp,(dp[i-1][j]%2==a[i-1]?dp[i-1][j]+2:dp[i-1][j]+1));
            if(j>0) tmp=min(tmp,(dp[i][j-1]%2==b[j-1]?dp[i][j-1]+2:dp[i][j-1]+1));
            dp[i][j]=min(dp[i][j],tmp);
        }
    }

    cout << dp[n][m] << '\n';
}

signed main() {
    war_without_reason

    solve();
}
