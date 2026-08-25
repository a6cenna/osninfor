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
    vector<int> dp(n+1,0);
    for(int i=1;i<=n;i++) {
        dp[i]=max(i, dp[i/2]+dp[i/3]+dp[i/4]);
    }

    cout << dp[n] << '\n';
}

int main() {
    war_without_reason

    solve();
}
