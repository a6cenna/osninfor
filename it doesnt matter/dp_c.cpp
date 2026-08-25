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
    int a[n],b[n],c[n];
    for(int i=0;i<n;i++) {
        cin>>a[i]>>b[i]>>c[i];
    }
    int dp[n+1][3];
    memset(dp,-1,sizeof(dp));
    dp[0][0]=0;
    dp[0][1]=0;
    dp[0][2]=0;
    for(int i=1;i<=n;i++) {
        dp[i][0]=max(dp[i-1][1], dp[i-1][2])+a[i-1];
        dp[i][1]=max(dp[i-1][0], dp[i-1][2])+b[i-1];
        dp[i][2]=max(dp[i-1][1], dp[i-1][0])+c[i-1];
    }

    cout << max({dp[n][0], dp[n][1], dp[n][2]}) << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
