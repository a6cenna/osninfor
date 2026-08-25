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

const int mod=1e9+7;

void solve() {
    int n;cin>>n;

    vector<int> dp(n+1, 0);
    dp[0]=1;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=6&&j<=i;j++) {
            dp[i]=(dp[i]+dp[i-j])%mod;
        }
    }

    cout << dp[n] << '\n';
}

int main() {
    war_without_reason

    solve();
}
