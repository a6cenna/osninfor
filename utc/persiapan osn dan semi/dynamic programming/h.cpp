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
    string k;cin>>k;
    int n=k.length();
    int d;cin>>d;
    vector<vector<int>> dp(n+1, vector<int>(d, 0)); // digit sampai ke i dengan sisa j
    dp[0][0]=1;
    for(int i=1;i<=n;i++) {
        for(int j=0;j<=d-1;j++) {
            for(int h=0;h<=9;h++) dp[i][j]+=(dp[i-1][((j-h)%d+d)%d])%mod;
        } 
    }

    int ans=0;
    int sum=0; // jumlahan yg udah max sebelumnya

    for(int i=0;i<n;i++) {
        int cur=(k[i]-'0');
        for(int j=0;j<cur;j++) {
            ans=(ans+dp[n-i-1][((-(sum+j))%d+d)%d])%mod;
            // cout << dp[1][((-(sum+j))%d+d)%d] << " dbg\n";
        }
        sum=(sum+cur)%d;
    }
    if(sum%d==0) ans=(ans+1)%mod;
    cout << (ans-1+mod)%mod << '\n';
}

signed main() {
    war_without_reason

    solve();
}
