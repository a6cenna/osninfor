// author: sofwant || a6cenna

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

const int N=1e5+5;
int dp[N][2];

void solve() {
    int n;cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    dp[0][0]=0;
    dp[0][1]=0;
    int mn=0;
    for(int i=1;i<=n;i++) {
        dp[i][0]=max(dp[i-1][0], dp[i-1][1])-a[i-1];
        dp[i][1]=b[i-1]-mn;
        mn=min(mn-a[i-1], b[i-1]-max(dp[i-1][0], dp[i-1][1]));
    }
    cout << max(dp[n][0], dp[n][1]) << '\n';
}

signed main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
