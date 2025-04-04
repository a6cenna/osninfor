// author: sofwant || a6cenna
// created at 03/04/2025
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

// const int MAXN = 200005;
const int MOD = 998244353;

// vector<int> pangkat_2(MAXN, 1);

void solve() {
    // int n;cin>>n;
    // int a[n];
    // for(int i=0;i<n;i++)cin>>a[i];

    // vector<int>pre1(n+1,0);
    // vector<int>suf3(n+2,0);
    // vector<int>pre2(n+1,0);

    // for(int i=1;i<=n;i++) pre1[i]=pre1[i-1]+(a[i-1]==1);
    // for(int i=1;i<=n;i++) pre2[i]=pre2[i-1]+(a[i-1]==2);
    // for(int i=n-1;i>=0;i--) suf3[i]=suf3[i+1]+(a[i]==3);
    // ll ans=0;
    // int at=0;
    // while(at<n){
    //     if(a[at]!=2){
    //         at++;continue;
    //     }
    //     int l=at;
    //     while(at<n&&a[at]!2) at++;
    //     int r=at;
    //     int cnt1=pre1[l],cnt2=pre2[r]-pre2[l],cnt3=suf3[r];
    //     if(cnt1>0&&cnt3>0){
    //         int ways = (pangkat_2[cnt2] - 1 + MOD) % MOD;
    //         ans = (ans + 1LL * cnt1 * ways % MOD * cnt3 % MOD) % MOD;
    //     }
    // }

    // cout << ans << '\n';
    int n;cin>>n;
    vector<int> dp(4, 0);
    dp[0]=1;
    int x;
    for(int i=0;i<n;i++) {
        cin>>x;
        if(x==2) dp[x] = (dp[x]+dp[x])%MOD;
        dp[x]=(dp[x]+dp[x-1])%MOD;
    }
    cout << dp[3] << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    // for(int i = 1; i < MAXN; i++) {
    //     pangkat_2[i] = (2LL * pangkat_2[i - 1]) % MOD;
    // }

    while(t--) {
        solve();
    }
}
