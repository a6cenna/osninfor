#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back

const int mod=1e9+7;

void solve() {
    int b;cin>>b;
    string y;cin>>y;
    int n=y.length();
    vector<int> dp(n+2,0);
    dp[n+1]=1;
    for(int i=n;i>=1;i--) {
        if(y[i-1]=='0') {
            dp[i]=dp[i+1];
            continue;
        }
        int tmp=0;
        for(int j=1;j<=n-i+1;j++) {
            tmp=tmp*10+(y[i+j-2]-'0');
            // cout << tmp << " dbg\n";
            if(tmp<b&&y[i-1]!='0') {
                // cout << tmp << " dbg\n";
                dp[i]=(dp[i]+dp[i+j])%mod;
            }
            if(tmp>=b) break;
        }
    }

    cout << dp[1] << '\n';
}

signed main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);

    solve();
}
