// in the pool

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

const int MOD=1e9+7;

void solve() {
    string s;cin>>s;
    int n=s.length();
    int dp[n+5];
    dp[0]=1;
    dp[1]=1;
    bool ok=true;
    for(int i=0;i<n;i++) if(s[i]=='m'||s[i]=='w') ok=false;
    if(!ok) {
        cout << 0 << '\n';
        return;
    }
    for(int i=2;i<=n;i++) {
        dp[i]=dp[i-1];
        if(s[i-1]==s[i-2]&&(s[i-1]=='u'||s[i-1]=='n')) dp[i]=(dp[i]+dp[i-2])%MOD;
    }

    cout << dp[n] << '\n';
}

signed main() {
    suffering_leaves_suffering_leaves

    solve();
}
