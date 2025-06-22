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

const int MOD = 1000000;

void solve() {
    int n;cin>>n;

    ll dp[n+1];
    dp[0]=1;
    dp[1]=1;
    dp[2]=1;
    for(int i=3;i<=n;i++) {
        dp[i]=(dp[i-1]+dp[i-3])%MOD;
    }

    cout << dp[n];
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
