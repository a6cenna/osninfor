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
#define int ll

void solve() {
    int n,k;cin>>n>>k;
    int a[n],b[n];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    bool dp[n+1][2];
    dp[1][0]=1;
    dp[1][1]=1;
    for(int i=1;i<n;i++) {
        dp[i+1][0]=((dp[i][0]&&abs(a[i]-a[i-1])<=k)||(dp[i][1]&&abs(a[i]-b[i-1])<=k));
        dp[i+1][1]=((dp[i][0]&&abs(b[i]-a[i-1])<=k)||(dp[i][1]&&abs(b[i]-b[i-1])<=k));
    }
    cout << (dp[n][0]||dp[n][1]?"Yes":"No") << '\n';
}

signed main() {
    suffering_leaves_suffering_leaves

    solve();
}
