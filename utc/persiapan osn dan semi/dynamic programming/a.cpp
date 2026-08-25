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

void solve() {
    int n;cin>>n;
    vector<int> h(n+1);
    for(int i=1;i<=n;i++) cin>>h[i];
    vector<int> dp(n+1,0);
    for(int i=2;i<=n;i++) {
        dp[i]=dp[i-1]+abs(h[i]-h[i-1]);
        if(i>2) dp[i]=min(dp[i], dp[i-2]+abs(h[i]-h[i-2]));
    }

    cout << dp[n] << '\n';
}

int main() {
    war_without_reason

    solve();
}
