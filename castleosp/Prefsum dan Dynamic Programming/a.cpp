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
    vector<int> h(n);
    for(int i=0;i<n;i++) cin>>h[i];

    vector<int> dp(n+1, 0);

    for(int i=2;i<=n;i++) {
        dp[i]=dp[i-1]+abs(h[i-1]-h[i-2]);
        if(i>2) dp[i]=min(dp[i], dp[i-2]+abs(h[i-1]-h[i-3]));
    }

    cout << dp[n] << '\n';
}

signed main() {
    war_without_reason

    solve();
}
