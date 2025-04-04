// author: sofwant || a6cenna
// created at (date)
// suffering leaves suffering leaves.

#include <bits/stdc++.h>
using namespace std;

#define suffering_leaves_suffering_leaves ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fs first
#define sc second
#define pb push_back

const int MOD = 998244353;

void solve() {
    int n;cin>>n;
    vector<int> a(n+1);
    for(int i=1;i<=n;i++)cin>>a[i];
    vector<int>dp(n+1,0);
    dp[0]=1;
    for(int i=1;i<=n;i++) {
        if(a[i]==a[i-1]) dp[i]=(dp[i]+dp[i-1])%MOD;
        if(i>=2 && a[i]==a[i-2]+1) dp[i]=(dp[i]+dp[i-2])%MOD;
    }

    cout << (dp[n]+dp[n-1])%MOD << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
