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

const int mod=1e9+7;

void solve() {
    int n,k,d;cin>>n>>k>>d;
    vector<vector<int>> dp(n+1, vector<int>(2)); // jumlah, ada yg >=d ga

    dp[0][0]=1;
    for(int i=1;i<=n;i++) { //  jumlah dari 1 sampai i
        for(int j=1;j<=k;j++) { // konsiderasi koin dari 1..j
            if(j>i) break;
            dp[i][1]=(dp[i][1]+dp[i-j][1])%mod;
            if(j<d) dp[i][0]=(dp[i][0]+dp[i-j][0])%mod;
            else dp[i][1]=(dp[i][1]+dp[i-j][0])%mod;
        }
    }

    cout << dp[n][1] << '\n'; 
}

signed main() {
    war_without_reason

    solve();
}
